package com.strukovna.samobornt

import android.os.Bundle
import android.widget.Button
import androidx.appcompat.app.AppCompatActivity
import com.google.android.gms.location.FusedLocationProviderClient
import com.google.android.gms.location.LocationServices
import com.strukovna.samobornt.services.requestPermission
import com.strukovnasamobor.samobornt.api.startActivity

private lateinit var btnExplore: Button
lateinit var fusedLocationProviderClient: FusedLocationProviderClient
class StartScreenActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.start_screen_activity)
        fusedLocationProviderClient = LocationServices.getFusedLocationProviderClient(this)
        btnExplore = findViewById(R.id.btnExplore)
        requestPermission()

        initListener()

    }

    private fun initListener(){

        btnExplore.setOnClickListener {
            startActivity<MapsActivity>()

        }


    }

}