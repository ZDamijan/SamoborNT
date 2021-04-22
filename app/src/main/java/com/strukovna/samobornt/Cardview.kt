package com.strukovna.samobornt

import android.content.Intent
import android.os.Bundle
import android.view.WindowManager.LayoutParams.FLAG_FULLSCREEN
import android.widget.Button
import android.widget.ImageButton
import androidx.appcompat.app.AppCompatActivity
import com.google.android.gms.location.FusedLocationProviderClient
import com.google.android.gms.location.LocationServices
import com.strukovna.samobornt.services.DBConnection
import com.strukovna.samobornt.services.requestPermission
import com.strukovnasamobor.samobornt.api.startActivity


private lateinit var slika1: ImageButton

class cardview : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {

        @Suppress("DEPRECATION")
        window.setFlags(FLAG_FULLSCREEN, FLAG_FULLSCREEN)

        super.onCreate(savedInstanceState)
        setContentView(R.layout.cardview)


        slika1 = findViewById(R.id.slika1)

        initListener()

        val connection: DBConnection = DBConnection.getConnectionInstance(this)
    }

    private fun initListener() {
        slika1.setOnClickListener {
            //TU FRENKI MJENJA NA SVOJE
            startActivity<MapsActivity>()
        }
    }
}
