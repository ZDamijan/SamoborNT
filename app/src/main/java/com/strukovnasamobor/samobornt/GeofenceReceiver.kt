package com.strukovnasamobor.samobornt

import android.content.BroadcastReceiver
import android.content.Context
import android.content.Intent
import android.widget.Toast
import com.google.android.gms.location.Geofence
import com.google.android.gms.location.GeofencingEvent

class GeofenceReceiver : BroadcastReceiver() {
    lateinit var key: String

    override fun onReceive(context: Context?, intent: Intent?) {
        if (context != null) {
            val geofencingEvent = GeofencingEvent.fromIntent(intent)
            val geofencingTransition = geofencingEvent.geofenceTransition

            if (geofencingTransition == Geofence.GEOFENCE_TRANSITION_ENTER) {
                if (intent != null) {
                    key = intent.getStringExtra("key")!!
                    Toast.makeText(context, "Ulaz u geofence: " + key, Toast.LENGTH_SHORT).show()
                }

            }

        }
    }

}