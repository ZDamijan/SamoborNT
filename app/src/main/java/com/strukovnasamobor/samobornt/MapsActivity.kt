package com.strukovnasamobor.samobornt

import android.Manifest
import android.annotation.SuppressLint
import android.app.Dialog
import android.app.PendingIntent
import android.content.ActivityNotFoundException
import android.content.Context
import android.content.Intent
import android.content.pm.PackageManager
import android.content.res.Configuration
import android.graphics.Color
import android.net.Uri
import android.os.Build
import android.os.Bundle
import android.view.Window
import android.widget.*
import androidx.appcompat.app.AppCompatActivity
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
import java.util.*
import kotlin.collections.ArrayList

const val GEOFENCE_RADIUS = 50
const val GEOFENCE_LOCATION_REQUEST_CODE = 5

class MapsActivity : AppCompatActivity(), OnMapReadyCallback {

    private lateinit var map: GoogleMap
    private lateinit var geofencingClient: GeofencingClient

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        Toast.makeText(this, "onCreate", Toast.LENGTH_SHORT).show()
        setContentView(R.layout.activity_maps)
        setSupportActionBar(findViewById(R.id.toolbar))

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q)
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

        val imageViewMenu = findViewById<ImageView>(R.id.imageViewMenu)
        imageViewMenu.setOnClickListener {
            val popupMenu = PopupMenu(this, it)
            popupMenu.setOnMenuItemClickListener { item ->
                when (item.itemId) {
                    R.id.menu_changeLanguage -> {
                        val dialog = Dialog(this)
                        @Suppress("DEPRECATION") val currentLang = resources.configuration.locale.language
                        dialog.requestWindowFeature(Window.FEATURE_NO_TITLE)
                        dialog.setCancelable(true)
                        dialog.setCanceledOnTouchOutside(true)
                        dialog.setContentView(R.layout.language_dialog)
                        val languageRadioGroup: RadioGroup =
                                dialog.findViewById(R.id.rdg_languages) as RadioGroup
                        languageRadioGroup.check(R.id.rdb_en)
                        for (i in 0..languageRadioGroup.childCount) {
                            if (languageRadioGroup.getChildAt(i).tag == currentLang) {
                                languageRadioGroup.check(languageRadioGroup.getChildAt(i).id)
                                break;
                            }
                        }
                        dialog.findViewById<Button>(R.id.btn_close).setOnClickListener {
                            dialog.cancel()
                        }
                        dialog.findViewById<Button>(R.id.btn_save).setOnClickListener {
                            val checkedRadioButton: RadioButton = dialog.findViewById(
                                    languageRadioGroup.checkedRadioButtonId
                            ) as RadioButton
                            changeLanguage(checkedRadioButton.tag.toString())
                            dialog.cancel()
                        }
                        dialog.show()
                        true
                    }
                    R.id.menu_seeAllMarkers -> {
                        Toast.makeText(this, "See All Markers", Toast.LENGTH_SHORT).show()
                        true
                    }
                    R.id.menu_augmentedReality -> {
                        Toast.makeText(this, "Augmented Reality", Toast.LENGTH_SHORT).show()
                        val intent = Intent(this, UnityHolderActivity::class.java)
                        intent.putExtra("sceneName", "LauncherScreen")
                        startActivity(intent)
                        true
                    }
                    R.id.menu_about -> {
                        Toast.makeText(
                                this,
                                "Created by: Ekonomska, turistička i ugostiteljska škola, Samobor\nPartner: Srednja strukovnasamobor škola, Samobor\nSupported by: Ministry of Tourism and Sports\nVersion: 2021 1.0",
                                Toast.LENGTH_LONG
                        ).show()
                        true
                    }
                    R.id.virtual_tour -> {
                        val browserIntent = Intent(Intent.ACTION_VIEW, Uri.parse("https://www.samobor.hr/virtualna-tura/"))
                        try {
                            startActivity(browserIntent)
                        } catch (ex: ActivityNotFoundException) {
                        }
                        true
                    }
                    else -> false
                }
            }
            popupMenu.inflate(R.menu.menu_main)
            popupMenu.show()
        }

        val mapFragment = supportFragmentManager
            .findFragmentById(R.id.map) as SupportMapFragment
        mapFragment.getMapAsync(this)

        createLocationCallback(::showCurrentLocation)
        createLocationRequest()
        geofencingClient = LocationServices.getGeofencingClient(this)
        Toast.makeText(this, "Intialising geofencingClient", Toast.LENGTH_SHORT).show()

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
                                ), placemark.getProperty("name")!!, geofencingClient)
                            //Toast.makeText(this, "Geofencing: " + placemark.getProperty("name")!!, Toast.LENGTH_SHORT).show()
                        }
                        else if (geometry.geometryType.equals("LineString")) {
                            val kmlLineString: KmlLineString = geometry as KmlLineString
                            val coordinates: ArrayList<LatLng> = kmlLineString.geometryObject
                            for (latLng in coordinates) {
                                pathPoints.add(latLng);
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

    private fun changeLanguage(languageToLoad: String) {
        val locale = Locale(languageToLoad)
        Locale.setDefault(locale)
        val config = Configuration()
        config.setLocale(locale)
        @Suppress("DEPRECATION")
        baseContext.resources.updateConfiguration(
                config,
                baseContext.resources.displayMetrics
        )
    }

    private fun createGeofence(location: LatLng, key: String, geofencingClient: GeofencingClient) {
        val geofence = Geofence.Builder()
            .setRequestId(key)
            .setCircularRegion(location.latitude, location.longitude, GEOFENCE_RADIUS.toFloat())
            .setExpirationDuration(Geofence.NEVER_EXPIRE.toLong())
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
}