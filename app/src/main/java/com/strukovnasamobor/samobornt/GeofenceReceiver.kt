package com.strukovnasamobor.samobornt

import android.content.BroadcastReceiver
import android.content.Context
import android.content.Intent
import android.widget.Toast
import com.google.android.gms.location.Geofence
import com.google.android.gms.location.GeofencingEvent

class GeofenceReceiver : BroadcastReceiver() {
    override fun onReceive(context: Context?, intent: Intent?) {
        if (context != null) {
            val geofencingEvent = GeofencingEvent.fromIntent(intent)
            val geofencingTransition = geofencingEvent.geofenceTransition
            val triggeringGeofences = geofencingEvent.triggeringGeofences
            if (geofencingTransition == Geofence.GEOFENCE_TRANSITION_ENTER) {

                triggeringGeofences.forEach {
                    Toast.makeText(context, "Ulaz u geofence: " + it.requestId, Toast.LENGTH_SHORT).show()

                    MapboxActivity.showNotification(
                        context.applicationContext,
                        it.requestId
                    )
                    //ovdje umjesto ovog Toast-a, treba poslati notifikaciju da je korisnik usao u geofence, ime geofence-a dobijemo preko: it.requestId
                }

            }
        }
    }
}