package com.strukovna.samobornt

import android.Manifest
import android.annotation.SuppressLint
import android.content.pm.PackageManager
import android.content.res.Resources
import android.graphics.Color
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.Toast
import androidx.core.app.ActivityCompat

import com.google.android.gms.maps.CameraUpdateFactory
import com.google.android.gms.maps.GoogleMap
import com.google.android.gms.maps.OnMapReadyCallback
import com.google.android.gms.maps.SupportMapFragment
import com.google.android.gms.maps.model.*
import com.strukovna.samobornt.services.*

class MapsActivity : AppCompatActivity(), OnMapReadyCallback {

    private lateinit var map: GoogleMap

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_maps)

        val mapFragment = supportFragmentManager
            .findFragmentById(R.id.map) as SupportMapFragment
        mapFragment.getMapAsync(this)

        createLocationCallback { this::showCurrentLocation }
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
    private fun setMapStyle(map: GoogleMap) {
        try {
            // Customize the styling of the base map using a JSON object defined
            // in a raw resource file.
            val success = map.setMapStyle(
                MapStyleOptions.loadRawResourceStyle(
                    this,
                    R.raw.map_style
                )
            )
            if (!success) {
                Log.e(logMsg, "Style parsing failed.")
            }
        }
        catch (e: Resources.NotFoundException) {
            Log.e(logMsg, "Can't find style. Error: ", e)
        }
    }

    override fun onMapReady(googleMap: GoogleMap) {
        map = googleMap
        map.uiSettings.isZoomControlsEnabled = true
        // https://snazzymaps.com/editor/customize/113400
        setMapStyle(map)
        // Add a marker in Samobor and move the camera
        val samobor = LatLng(45.8011, 15.7110)
        map.addMarker(
            MarkerOptions()
                .position(samobor).title("Samobor")
                .icon(BitmapDescriptorFactory.defaultMarker(BitmapDescriptorFactory.HUE_RED))
                .title("Samobor")
                .snippet("Click for more info.")
        )
        map.setOnMapClickListener { latLng ->
            Toast.makeText(this, "onMapClick:\n" + latLng.latitude + "\n" + latLng.longitude, Toast.LENGTH_SHORT).show();
            true
        }
        map.setOnMarkerClickListener { marker ->
            Toast.makeText(this, "OnMarkerClick: " + marker.title, Toast.LENGTH_SHORT).show()
            marker.showInfoWindow()
            true
        }
        map.setOnInfoWindowClickListener { marker ->
            Toast.makeText(this, "OnInfoWindowClick: " + marker.title, Toast.LENGTH_SHORT).show()
        }
        val polyline1 = googleMap.addPolyline(
            PolylineOptions()
                .color(Color.GREEN)
                .jointType(JointType.ROUND)
                .startCap(RoundCap())
                .startCap(RoundCap())
                .pattern(listOf(
                    Dot(), Gap(20F), Dash(30F), Gap(20F)))
                .geodesic(true)
                .add(
                    LatLng(45.8011, 15.7110),
                    LatLng(45.8111, 15.7010),
                    LatLng(45.8211, 15.7310),
                    LatLng(45.8311, 15.6910),)
        )
        map.moveCamera(CameraUpdateFactory.newLatLngZoom(samobor, 18f))
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

    private fun setupMap() = getLocationUpdates(this::showCurrentLocation)

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