package com.strukovnasamobor.samobornt

import android.Manifest
import android.annotation.SuppressLint
import android.app.NotificationChannel
import android.app.NotificationManager
import android.app.PendingIntent
import android.content.Context
import android.content.Intent
import android.content.pm.PackageManager
import android.database.Cursor
import android.graphics.Color
import android.os.Build
import android.os.Bundle
import android.widget.*
import androidx.core.app.ActivityCompat
import androidx.core.app.NotificationCompat
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
import kotlin.random.Random

class MapsActivity : BaseActivity(), OnMapReadyCallback {

    private lateinit var map: GoogleMap

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        Toast.makeText(this, "onCreate", Toast.LENGTH_SHORT).show()
        setContentView(R.layout.activity_maps)
        super.initializeMenu()


        val mapFragment = supportFragmentManager
            .findFragmentById(R.id.map) as SupportMapFragment
        mapFragment.getMapAsync(this)

        createLocationCallback(::showCurrentLocation)
        createLocationRequest()
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
}