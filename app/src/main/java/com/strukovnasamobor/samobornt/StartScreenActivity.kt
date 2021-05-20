package com.strukovnasamobor.samobornt

import android.os.Bundle
import android.view.View
import android.widget.Button
import androidx.appcompat.app.AppCompatActivity
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
        initListener()
    }

    private fun initListener() {
        btnExplore.setOnClickListener {
            //startActivity<MapsActivity>()
            startActivity<MapboxActivity>()
        }
    }
}