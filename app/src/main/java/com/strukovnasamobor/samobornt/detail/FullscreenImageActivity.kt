package com.strukovnasamobor.samobornt.detail

import android.os.Bundle
import android.view.ViewGroup
import android.view.WindowManager
import android.widget.ImageView
import androidx.core.content.ContextCompat
import com.strukovnasamobor.samobornt.BaseActivity
import com.strukovnasamobor.samobornt.R


class FullscreenImageActivity : BaseActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        super.initializeMenu()
        supportActionBar!!.hide()

        setContentView(R.layout.fullscreen_image)

        val imageView: ImageView = findViewById(R.id.fullscreen_image)
        imageView.setImageDrawable(ContextCompat.getDrawable(this, intent!!.extras!!.getInt("imageResource")))

        @Suppress("DEPRECATION")
        window.setFlags(
            WindowManager.LayoutParams.FLAG_FULLSCREEN,
            WindowManager.LayoutParams.FLAG_FULLSCREEN
        )
    }
}