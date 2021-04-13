package com.strukovnasamobor.samobornt

import android.app.Activity
import android.content.Intent
import android.content.Intent.FLAG_ACTIVITY_REORDER_TO_FRONT
import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity
import com.unity3d.player.UnityPlayerActivity

class UnityHolderActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_unity_holder)
        val bundle = intent.extras
        val sceneName = bundle!!.getString("sceneName")
        val intent = Intent(this, UnityPlayerActivity::class.java)
        intent.putExtra("arguments", sceneName)
        startActivity(intent)
        finish()
    }

    // function to call from Unity Script
    companion object {
        @JvmStatic
        fun Call(activity: Activity) {
            Log.e("unityPlayer", "Unity called Android function 'Call' in Activity '" + activity.toString() + "'.")
            val intent = Intent(activity, MapsActivity::class.java)
            intent.flags = FLAG_ACTIVITY_REORDER_TO_FRONT
            activity.startActivity(intent)
        }
    }
}