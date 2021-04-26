package com.strukovnasamobor.samobornt

import android.os.Bundle
import android.widget.ImageButton
import com.strukovnasamobor.samobornt.api.startActivity
import com.strukovnasamobor.samobornt.services.DBConnection

class CardView : BaseActivity() {
    private lateinit var cardview_image1: ImageButton

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.cardview)
        super.initializeMenu()

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
