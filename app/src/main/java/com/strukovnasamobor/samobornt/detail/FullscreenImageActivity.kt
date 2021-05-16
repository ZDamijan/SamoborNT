package com.strukovnasamobor.samobornt.detail

import android.os.Bundle
import android.view.ViewGroup
import android.view.WindowManager
import android.widget.ImageView
import com.strukovnasamobor.samobornt.BaseActivity
import com.strukovnasamobor.samobornt.R

class FullscreenImageActivity : BaseActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        super.initializeMenu()
        supportActionBar!!.hide()

        setContentView(R.layout.detail_image)

        val imageView: ImageView = findViewById(R.id.image)
        imageView.setImageResource(intent!!.extras!!.getInt("imageResource"))

        @Suppress("DEPRECATION")
        window.setFlags(
            WindowManager.LayoutParams.FLAG_FULLSCREEN,
            WindowManager.LayoutParams.FLAG_FULLSCREEN
        )

        imageView.layoutParams.height = ViewGroup.LayoutParams.MATCH_PARENT
        imageView.layoutParams.width = ViewGroup.LayoutParams.MATCH_PARENT
        imageView.scaleType = ImageView.ScaleType.CENTER_CROP
    }
}