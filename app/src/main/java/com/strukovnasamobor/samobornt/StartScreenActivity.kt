package com.strukovnasamobor.samobornt

import android.app.Activity
import android.content.SharedPreferences
import android.content.res.Configuration
import android.os.Bundle
import android.view.View
import android.widget.Button
import androidx.appcompat.app.AppCompatActivity
import com.google.android.gms.location.FusedLocationProviderClient
import com.google.android.gms.location.LocationServices
import com.strukovnasamobor.samobornt.api.startActivity
import com.strukovnasamobor.samobornt.services.requestPermission
import java.util.*


private lateinit var btnExplore: Button
lateinit var fusedLocationProviderClient: FusedLocationProviderClient
lateinit var configuration: Configuration

class StartScreenActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        loadLanguage()
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

    private fun loadLanguage() {
        lateinit var language: String
        val packageName: String = applicationContext.packageName
        val sharedPreferences: SharedPreferences =
            getSharedPreferences("$packageName.PREFERENCES", Activity.MODE_PRIVATE)

        language = if (sharedPreferences.getString("PREFERRED_LANGUAGE", "") == "") {
            "hr"
        } else {
            sharedPreferences.getString("PREFERRED_LANGUAGE", "")!!
        }

        val locale = Locale(language)
        Locale.setDefault(locale)
        configuration = Configuration()
        configuration.setLocale(locale)
        @Suppress("DEPRECATION")
        this.resources.updateConfiguration(
            configuration,
            this.resources.displayMetrics
        )
    }
}