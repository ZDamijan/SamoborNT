package com.strukovnasamobor.samobornt

import android.os.Bundle
import android.view.WindowManager.LayoutParams.FLAG_FULLSCREEN
import android.widget.ImageButton
import androidx.appcompat.app.AppCompatActivity
import com.strukovnasamobor.samobornt.api.startActivity
import com.strukovnasamobor.samobornt.services.DBConnection

class CardView : AppCompatActivity() {
    private lateinit var cardview_image1: ImageButton

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.cardview)
        setSupportActionBar(findViewById(R.id.toolbar))

        cardview_image1 = findViewById(R.id.cardview_image1)
        initListener()
        val connection: DBConnection = DBConnection.getConnectionInstance(this)
    }

    private fun initListener() {
        cardview_image1.setOnClickListener {
            startActivity<MapsActivity>()
        }
    }
}
