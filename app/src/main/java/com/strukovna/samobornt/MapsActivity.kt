package com.strukovna.samobornt

import android.annotation.SuppressLint
import android.app.Dialog
import android.graphics.Color
import android.os.Bundle
import android.view.Window
import android.widget.ImageView
import android.widget.PopupMenu
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
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
import com.strukovna.samobornt.services.*


class MapsActivity : AppCompatActivity(), OnMapReadyCallback {

    private lateinit var map: GoogleMap

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_maps)
        setSupportActionBar(findViewById(R.id.toolbar))

        val imageViewMenu = findViewById<ImageView>(R.id.imageViewMenu)
        imageViewMenu.setOnClickListener {
            val popupMenu = PopupMenu(this, it)
            popupMenu.setOnMenuItemClickListener { item ->
                when (item.itemId) {
                    R.id.menu_changeLanguage_app -> {
                        Toast.makeText(this, "Change Language", Toast.LENGTH_SHORT).show()
                        val dialog = Dialog(this)
                        dialog.requestWindowFeature(Window.FEATURE_NO_TITLE)
                        dialog.setCancelable(false)
                        dialog.setContentView(R.layout.language_dialog)
                        dialog.show()
                        true
                    }
                    R.id.menu_seeAllMarkers_app -> {
                        Toast.makeText(this, "See All Markers", Toast.LENGTH_SHORT).show()
                        true
                    }
                    R.id.menu_about -> {
                        Toast.makeText(
                            this,
                            "Created by: Ekonomska, turistička i ugostiteljska škola, Samobor\nPartner: Srednja strukovna škola, Samobor\nSupported by: Ministry of Tourism and Sports\nVersion: 2021 1.0",
                            Toast.LENGTH_LONG
                        ).show()
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
    }

    override fun onResume() {
        super.onResume()
        if (!locationUpdateState) startLocationUpdates()
    }

    override fun onPause() {
        super.onPause()
        stopLocationUpdates()
    }

    private val logMsg = MapsActivity::class.java.simpleName

    override fun onMapReady(googleMap: GoogleMap) {
        map = googleMap
        map.uiSettings.isZoomControlsEnabled = true

        val markerManager = MarkerManager(map)
        val groundOverlayManager = GroundOverlayManager(map!!)
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
        if (kmlLayer?.getContainers() != null) {
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
                                    .icon(
                                        BitmapDescriptorFactory.defaultMarker(
                                            BitmapDescriptorFactory.HUE_AZURE
                                        )
                                    )
                                    .title(placemark.getProperty("name"))
                                    .snippet(placemark.getProperty("description"))
                            )
                        }
                        else if (geometry.getGeometryType().equals("LineString")) {
                            val kmlLineString: KmlLineString = geometry as KmlLineString
                            val coords: ArrayList<LatLng> = kmlLineString.geometryObject
                            for (latLng in coords) {
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
            ).show();
            true
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
            false
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
                    val currentLatLng = LatLng(location.latitude, location.longitude)
                    //map.animateCamera(CameraUpdateFactory.newLatLng(currentLatLng))
                }
            }
        }
    }
}