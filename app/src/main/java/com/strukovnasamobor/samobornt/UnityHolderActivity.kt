package com.strukovnasamobor.samobornt

import android.app.Activity
import android.content.Intent
import android.content.Intent.FLAG_ACTIVITY_NEW_TASK
import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity
import com.unity3d.player.UnityPlayerActivity

class UnityHolderActivity : AppCompatActivity() {
    // function to call from Unity Script
    companion object {
        @JvmStatic
        fun Call(activity: Activity) {
            //Log.e("unityPlayer", "Unity called Android function 'Call'.")
        }
    }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_unity_holder)
        val intent = Intent(this, UnityPlayerActivity::class.java)
        intent.flags = FLAG_ACTIVITY_NEW_TASK
        intent.putExtra("arguments", "scene name")
        startActivity(intent)
        finish()
    }
}