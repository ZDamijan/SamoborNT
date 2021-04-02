package com.strukovna.samobornt

import android.graphics.Color
import android.os.Build
import android.os.Bundle
import android.view.View
import android.view.WindowManager
import android.view.WindowManager.LayoutParams.FLAG_FULLSCREEN
import android.widget.Button
import androidx.appcompat.app.AppCompatActivity
import com.google.android.gms.location.FusedLocationProviderClient
import com.google.android.gms.location.LocationServices
import com.strukovna.samobornt.services.DBConnection
import com.strukovna.samobornt.services.requestPermission
import com.strukovnasamobor.samobornt.api.startActivity


private lateinit var btnExplore: Button
lateinit var fusedLocationProviderClient: FusedLocationProviderClient

class StartScreenActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        this.window.apply {
            clearFlags(WindowManager.LayoutParams.FLAG_TRANSLUCENT_STATUS)
            addFlags(WindowManager.LayoutParams.FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS)
            decorView.systemUiVisibility = View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
            statusBarColor = Color.TRANSPARENT
        }
        setContentView(R.layout.start_screen_activity)

        fusedLocationProviderClient = LocationServices.getFusedLocationProviderClient(this)
        btnExplore = findViewById(R.id.btnExplore)
        requestPermission()

        initListener()

        val connection: DBConnection = DBConnection.getConnectionInstance(this)
    }

    private fun initListener() {
        btnExplore.setOnClickListener {
            startActivity<MapsActivity>()
        }
    }
}

