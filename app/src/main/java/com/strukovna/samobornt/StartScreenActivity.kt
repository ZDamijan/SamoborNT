package com.strukovna.samobornt

import android.content.res.Configuration
import android.os.Bundle
import android.view.WindowManager.LayoutParams.FLAG_FULLSCREEN
import android.widget.Button
import androidx.appcompat.app.AppCompatActivity
import com.strukovna.samobornt.services.DBConnection
import com.google.android.gms.location.FusedLocationProviderClient
import com.google.android.gms.location.LocationServices
import com.strukovna.samobornt.services.requestPermission
import com.strukovnasamobor.samobornt.api.startActivity
import java.util.*

private lateinit var btnExplore: Button
lateinit var fusedLocationProviderClient: FusedLocationProviderClient

class StartScreenActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {

        @Suppress("DEPRECATION")
        window.setFlags(FLAG_FULLSCREEN, FLAG_FULLSCREEN)

        super.onCreate(savedInstanceState)
        setContentView(R.layout.start_screen_activity)

        fusedLocationProviderClient = LocationServices.getFusedLocationProviderClient(this)
        btnExplore = findViewById(R.id.btnExplore)
        requestPermission()

        initListener()

        val connection: DBConnection = DBConnection.getConnectionInstance(this)
    }

    private fun initListener() {
        btnExplore.setOnClickListener {
            changeLanguage("en")
            startActivity<MapsActivity>()
        }
    }

    private fun changeLanguage(languageToLoad : String) {
        val locale = Locale(languageToLoad)
        Locale.setDefault(locale)
        val config = Configuration()
        config.setLocale(locale)
        baseContext.resources.updateConfiguration(
            config,
            baseContext.resources.displayMetrics
        )
    }

}

