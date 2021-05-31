package com.strukovnasamobor.samobornt

import android.Manifest
import android.app.Dialog
import android.content.pm.PackageManager
import android.os.Build
import android.os.Bundle
import android.view.View
import android.view.Window
import android.widget.Button
import androidx.appcompat.app.AppCompatActivity
import androidx.core.app.ActivityCompat
import androidx.core.content.ContextCompat
import com.google.android.gms.location.FusedLocationProviderClient
import com.google.android.gms.location.LocationServices
import com.strukovnasamobor.samobornt.api.startActivity
import com.strukovnasamobor.samobornt.services.LocaleHelper
import com.strukovnasamobor.samobornt.services.requestPermission


private lateinit var btnExplore: Button
lateinit var fusedLocationProviderClient: FusedLocationProviderClient

class StartScreenActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        LocaleHelper.setLanguage(this)
        super.onCreate(savedInstanceState)
        @Suppress("DEPRECATION")
        window.decorView.systemUiVisibility = (
                View.SYSTEM_UI_FLAG_IMMERSIVE
                or View.SYSTEM_UI_FLAG_HIDE_NAVIGATION)
        setContentView(R.layout.start_screen_activity)

        fusedLocationProviderClient = LocationServices.getFusedLocationProviderClient(this)
        btnExplore = findViewById(R.id.btn_explore)
        requestPermission()
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
                        arrayOf(Manifest.permission.ACCESS_BACKGROUND_LOCATION),
                        GEOFENCE_LOCATION_REQUEST_CODE
                    )
                }
            }
        }
        initListener()
    }

    private fun initListener() {
        btnExplore.setOnClickListener {
            //startActivity<MapsActivity>()
            startActivity<MapboxActivity>()
        }
    }
}