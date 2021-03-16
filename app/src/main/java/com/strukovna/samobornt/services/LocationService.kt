package com.strukovna.samobornt.services

import android.Manifest
import android.annotation.SuppressLint
import android.app.Activity
import android.content.ComponentCallbacks
import android.content.Context
import android.content.pm.PackageManager
import android.os.Looper
import androidx.core.app.ActivityCompat
import com.google.android.gms.common.api.ResolvableApiException
import com.google.android.gms.location.*
import com.strukovna.samobornt.fusedLocationProviderClient
import java.lang.Exception

private const val REQUEST_CODE = 12

val REQUEST_CHECK_CODE = 17
private lateinit var locationCallback: LocationCallback
private lateinit var locationRequest: LocationRequest
var locationUpdateState = false

fun Activity.requestPermission() {
    ActivityCompat.requestPermissions(
        this,
        arrayOf(android.Manifest.permission.ACCESS_FINE_LOCATION),
        REQUEST_CODE
    )

}

fun Context.hasLocationPermission(): Boolean {
    return ActivityCompat.checkSelfPermission(
        this,
        Manifest.permission.ACCESS_FINE_LOCATION
    ) == PackageManager.PERMISSION_GRANTED
}

fun createLocationCallback(function: () -> (Unit)) {
    locationCallback = object : LocationCallback() {
        override fun onLocationResult(locationResult: LocationResult?) {
            locationResult ?: return
            if (locationResult.locations.isNotEmpty())
                function()

        }
    }
}

fun Activity.createLocationRequest() {
    locationRequest = LocationRequest.create().apply {
        interval = 5000
        fastestInterval = 2000
        priority = LocationRequest.PRIORITY_HIGH_ACCURACY
    }

    val builder = LocationSettingsRequest.Builder().addLocationRequest(locationRequest)
    val client = LocationServices.getSettingsClient(this)
    val task = client.checkLocationSettings(builder.build())
    task.addOnSuccessListener {
        locationUpdateState = true
        startLocationUpdates()
    }
    task.addOnFailureListener { e ->
        if (e is ResolvableApiException) {
            try {
                e.startResolutionForResult(this, REQUEST_CHECK_CODE)
            } catch (ignored: Exception) {
            }
        }
    }

}

@SuppressLint("MissingPermission")
fun Activity.startLocationUpdates() {
    if (!hasLocationPermission())
        requestPermission()
    fusedLocationProviderClient.requestLocationUpdates(
        locationRequest,
        locationCallback,
        Looper.getMainLooper()
    )
}

fun stopLocationUpdates() {
    fusedLocationProviderClient.removeLocationUpdates(locationCallback)
}

fun Activity.getLocationUpdates(function: () -> Unit) {
    if (hasLocationPermission()) {
        createLocationCallback(function)
        createLocationRequest()
    } else
    {
        requestPermission()
    }
}