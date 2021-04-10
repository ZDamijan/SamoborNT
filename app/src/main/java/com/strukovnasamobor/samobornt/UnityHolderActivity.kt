package com.strukovnasamobor.samobornt

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.strukovnasamobor.samobornt.api.startActivity
import com.unity3d.player.UnityPlayerActivity

class UnityHolderActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_unity_holder)
        startActivity<UnityPlayerActivity>()
    }
}