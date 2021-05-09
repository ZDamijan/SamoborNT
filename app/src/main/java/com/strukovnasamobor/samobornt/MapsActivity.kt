package com.strukovnasamobor.samobornt

import android.Manifest
import android.annotation.SuppressLint
import android.app.PendingIntent
import android.content.Intent
import android.content.pm.PackageManager
import android.database.Cursor
import android.graphics.Color
import android.os.Build
import android.os.Bundle
import android.widget.*
import androidx.core.app.ActivityCompat
import androidx.core.content.ContextCompat
import com.google.android.gms.location.Geofence
import com.google.android.gms.location.GeofencingClient
import com.google.android.gms.location.GeofencingRequest
import com.google.android.gms.location.LocationServices
import com.google.android.libraries.maps.CameraUpdateFactory
import com.google.android.libraries.maps.GoogleMap
import com.google.android.libraries.maps.OnMapReadyCallback
import com.google.android.libraries.maps.SupportMapFragment
import com.google.android.libraries.maps.model.*
import com.google.maps.android.collections.GroundOverlayManager
import com.google.maps.android.collections.MarkerManager
import com.google.maps.android.collections.PolygonManager
import com.google.maps.android.collections.PolylineManager
import com.google.maps.android.data.kml.KmlLayer
import com.google.maps.android.data.kml.KmlLineString
import com.google.maps.android.data.kml.KmlPoint
import com.strukovnasamobor.samobornt.services.*
import kotlin.collections.ArrayList

const val GEOFENCE_RADIUS = 100 //ovo je radius geofence-a, tj. koliko daleko korisnik mora biti da dobije notifikaciju
const val GEOFENCE_LOCATION_REQUEST_CODE = 5

class MapsActivity : BaseActivity(), OnMapReadyCallback {

    private lateinit var map: GoogleMap
    private lateinit var geofencingClient: GeofencingClient
    private lateinit var connection: DBConnection

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        Toast.makeText(this, "onCreate", Toast.LENGTH_SHORT).show()
        setContentView(R.layout.activity_maps)
        super.initializeMenu()

        connection = DBConnection.getConnectionInstance(this)

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
            if (ContextCompat.checkSelfPermission(
                    applicationContext,
                    Manifest.permission.ACCESS_BACKGROUND_LOCATION
                ) != PackageManager.PERMISSION_GRANTED
            ) {
                ActivityCompat.requestPermissions(
                    this,
                    arrayOf(Manifest.permission.ACCESS_BACKGROUND_LOCATION),
                    GEOFENCE_LOCATION_REQUEST_CODE
                )
            }
        }

        val mapFragment = supportFragmentManager
            .findFragmentById(R.id.map) as SupportMapFragment
        mapFragment.getMapAsync(this)

        createLocationCallback(::showCurrentLocation)
        createLocationRequest()
        geofencingClient = LocationServices.getGeofencingClient(this)
    }

    override fun onStart() {
        super.onStart()
        Toast.makeText(this, "onStart", Toast.LENGTH_SHORT).show()
    }

    override fun onResume() {
        super.onResume()
        Toast.makeText(this, "onResume", Toast.LENGTH_SHORT).show()
        if (!locationUpdateState) startLocationUpdates()
    }

    override fun onPause() {
        super.onPause()
        Toast.makeText(this, "onPause", Toast.LENGTH_SHORT).show()
        stopLocationUpdates()
    }

    override fun onStop() {
        super.onStop()
        Toast.makeText(this, "onStop", Toast.LENGTH_SHORT).show()
        stopLocationUpdates()
    }

    override fun onDestroy() {
        super.onDestroy()
        Toast.makeText(this, "onDestroy", Toast.LENGTH_SHORT).show()
    }

    override fun onBackPressed() {
        moveTaskToBack(true)
    }

    override fun onMapReady(googleMap: GoogleMap) {
        map = googleMap
        map.uiSettings.isZoomControlsEnabled = true

        val markerManager = MarkerManager(map)
        val groundOverlayManager = GroundOverlayManager(map)
        val polygonManager = PolygonManager(map)
        val polylineManager = PolylineManager(map)
        val kmlLayer = KmlLayer(
            map,
            R.raw.route1,
            this,
            markerManager,
            polygonManager,
            polylineManager,
            groundOverlayManager,
            null
        )
        kmlLayer.addLayerToMap()

        val targetPosition = LatLng(45.8019356, 15.7098924)
        val cameraPosition = CameraPosition.Builder()
            .target(targetPosition) // Sets the center of the map to Mountain View
            .zoom(18f)            // Sets the zoom
            .bearing(0f)          // Sets the orientation of the camera to east
            .tilt(30f)            // Sets the tilt of the camera to 30 degrees
            .build()              // Creates a CameraPosition from the builder
        map.animateCamera(CameraUpdateFactory.newCameraPosition(cameraPosition))

        val markerCollection = markerManager.newCollection()
        val polylineCollection = polylineManager.newCollection()
        val pathPoints: ArrayList<LatLng> = ArrayList()
        if (kmlLayer.containers != null) {
            for (container in kmlLayer.containers) {
                if (container.hasPlacemarks()) {
                    for (placemark in container.placemarks) {
                        val geometry = placemark.geometry
                        if (geometry.geometryType.equals("Point")) {
                            val point: KmlPoint = placemark.geometry as KmlPoint
                            markerCollection.addMarker(
                                MarkerOptions()
                                    .position(
                                        LatLng(
                                            point.geometryObject.latitude,
                                            point.geometryObject.longitude
                                        )
                                    )
                                    .icon(BitmapDescriptorFactory.fromResource(R.drawable.marker_custom))
                                    .title(placemark.getProperty("name"))
                                    .snippet(placemark.getProperty("description"))
                            )
                            createGeofence(
                                LatLng(
                                    point.geometryObject.latitude,
                                    point.geometryObject.longitude
                                ), placemark.getProperty("name")!!, geofencingClient
                            )
                        } else if (geometry.geometryType.equals("LineString")) {
                            val kmlLineString: KmlLineString = geometry as KmlLineString
                            val coordinates: ArrayList<LatLng> = kmlLineString.geometryObject
                            for (latLng in coordinates) {
                                pathPoints.add(latLng)
                            }
                        }
                    }
                }
            }
        }
        polylineCollection.addPolyline(
            PolylineOptions()
                .color(Color.RED)
                .jointType(JointType.ROUND)
                .startCap(RoundCap())
                .startCap(RoundCap())
                .pattern(
                    listOf(
                        Dot(), Gap(20F), Dash(30F), Gap(20F)
                    )
                )
                .geodesic(true)
                .addAll(pathPoints)
        )

        kmlLayer.removeLayerFromMap()

        map.setOnMapClickListener { latLng ->
            Toast.makeText(
                this,
                "onMapClick:\n" + latLng.latitude + "\n" + latLng.longitude,
                Toast.LENGTH_SHORT
            ).show()
        }
        markerCollection.setOnMarkerClickListener { marker: Marker ->
            Toast.makeText(
                this,
                "OnMarkerClick: ${marker.title}",
                Toast.LENGTH_SHORT
            ).show()
            marker.showInfoWindow()
            true
        }
        markerCollection.setOnInfoWindowClickListener { marker: Marker ->
            Toast.makeText(
                this,
                "OnInfoWindowClick: ${marker.title}",
                Toast.LENGTH_SHORT
            ).show()
        }
        setupMap()
    }

    override fun onRequestPermissionsResult(
        requestCode: Int,
        permissions: Array<out String>,
        grantResults: IntArray
    ) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults)
        showCurrentLocation()
    }

    private fun setupMap() = getLocationUpdates(::showCurrentLocation)

    @SuppressLint("MissingPermission")
    private fun showCurrentLocation() {
        if (hasLocationPermission()) {
            map.isMyLocationEnabled = true
            fusedLocationProviderClient.lastLocation.addOnSuccessListener { location ->
                if (location != null) {
                    //val currentLatLng = LatLng(location.latitude, location.longitude)
                    //map.animateCamera(CameraUpdateFactory.newLatLng(currentLatLng))
                }
            }
        }
    }

    private fun createGeofence(location: LatLng, key: String, geofencingClient: GeofencingClient) {
        val geofence = Geofence.Builder()
            .setRequestId(key)
            .setCircularRegion(location.latitude, location.longitude, GEOFENCE_RADIUS.toFloat())
            .setExpirationDuration(Geofence.NEVER_EXPIRE)
            .setTransitionTypes(Geofence.GEOFENCE_TRANSITION_ENTER)
            .build()

        val geofenceRequest = GeofencingRequest.Builder()
            .setInitialTrigger(GeofencingRequest.INITIAL_TRIGGER_ENTER)
            .addGeofence(geofence)
            .build()

        val intent = Intent(this, GeofenceReceiver::class.java)
            .putExtra("key", key)

        val pendingIntent = PendingIntent.getBroadcast(
            applicationContext,
            0,
            intent,
            PendingIntent.FLAG_UPDATE_CURRENT
        )

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
            if (ContextCompat.checkSelfPermission(
                    applicationContext,
                    Manifest.permission.ACCESS_BACKGROUND_LOCATION
                ) != PackageManager.PERMISSION_GRANTED
            ) {
                ActivityCompat.requestPermissions(
                    this,
                    arrayOf(Manifest.permission.ACCESS_BACKGROUND_LOCATION),
                    GEOFENCE_LOCATION_REQUEST_CODE
                )
            } else {
                geofencingClient.addGeofences(geofenceRequest, pendingIntent)
            }
        } else {
            geofencingClient.addGeofences(geofenceRequest, pendingIntent)
        }
    }

    private fun getLocationList(): MutableList<Triple<String, Double, Double>> {
        val locationList: MutableList<Triple<String, Double, Double>> = mutableListOf()
        val cardsListLocale = resources.configuration.locales[0].toString()
        val correctTable = if (cardsListLocale == "hr") TABLE_NAME_HRV else TABLE_NAME_ENG
        val cursor: Cursor = connection.getFetchAllCursor(correctTable)
        if (cursor.moveToFirst()) {
            while (!cursor.isAfterLast) {
                val locationName = cursor.getString(cursor.getColumnIndex(C_NAME))
                val latitude = cursor.getDouble(cursor.getColumnIndex(C_LATITUDE))
                val longitude = cursor.getDouble(cursor.getColumnIndex(C_LONGITUDE))
                locationList.add(Triple(locationName, latitude, longitude))
                cursor.moveToNext()
            }
        }
        return locationList
    }
}