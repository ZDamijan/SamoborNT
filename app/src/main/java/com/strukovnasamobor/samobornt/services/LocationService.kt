package com.strukovnasamobor.samobornt.services

import android.Manifest
import android.annotation.SuppressLint
import android.app.Activity
import android.app.Dialog
import android.content.Context
import android.content.pm.PackageManager
import android.os.Build
import android.os.Looper
import android.view.Window
import android.widget.Button
import androidx.core.app.ActivityCompat
import androidx.core.content.ContextCompat
import com.google.android.gms.common.api.ResolvableApiException
import com.google.android.gms.location.*
import com.strukovnasamobor.samobornt.R
import com.strukovnasamobor.samobornt.fusedLocationProviderClient

const val REQUEST_CODE = 12
const val REQUEST_CHECK_CODE = 17

private lateinit var locationCallback: LocationCallback
private lateinit var locationRequest: LocationRequest
var locationUpdateState = false

fun Activity.requestPermission() {
    if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
        if (ContextCompat.checkSelfPermission(
                this,
                Manifest.permission.ACCESS_BACKGROUND_LOCATION
            ) != PackageManager.PERMISSION_GRANTED
        ) {
            val locationPopupWindow = Dialog(this)
            locationPopupWindow.requestWindowFeature(Window.FEATURE_NO_TITLE)
            locationPopupWindow.setCancelable(true)
            locationPopupWindow.setCanceledOnTouchOutside(true)
            locationPopupWindow.setContentView(R.layout.location_popup)
            locationPopupWindow.show()
            locationPopupWindow.findViewById<Button>(R.id.close_button).setOnClickListener {
                locationPopupWindow.cancel()
                ActivityCompat.requestPermissions(
                    this,
                    arrayOf(
                        Manifest.permission.ACCESS_FINE_LOCATION
                        //,Manifest.permission.ACCESS_BACKGROUND_LOCATION
                    ),
                    REQUEST_CODE
                )
            }
        }
    }
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
    } else {
        requestPermission()
    }
}