package com.strukovnasamobor.samobornt

import android.Manifest
import android.annotation.SuppressLint
import android.app.NotificationChannel
import android.app.NotificationManager
import android.app.PendingIntent
import android.content.Context
import android.content.Intent
import android.content.pm.PackageManager
import android.database.Cursor
import android.os.Build
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.ImageView
import android.widget.Toast
import androidx.core.app.NotificationCompat
import androidx.core.content.ContextCompat
import com.mapbox.android.core.permissions.PermissionsListener
import com.mapbox.android.core.permissions.PermissionsManager
import com.mapbox.mapboxsdk.Mapbox
import com.mapbox.mapboxsdk.geometry.LatLng
import com.mapbox.mapboxsdk.location.LocationComponentActivationOptions
import com.mapbox.mapboxsdk.location.LocationComponentOptions
import com.mapbox.mapboxsdk.location.OnCameraTrackingChangedListener
import com.mapbox.mapboxsdk.location.modes.CameraMode
import com.mapbox.mapboxsdk.location.modes.RenderMode
import com.mapbox.mapboxsdk.maps.MapView
import com.mapbox.mapboxsdk.maps.MapboxMap
import com.mapbox.mapboxsdk.maps.OnMapReadyCallback
import com.mapbox.mapboxsdk.maps.Style
import com.strukovnasamobor.samobornt.services.*
import kotlin.random.Random
import androidx.core.app.ActivityCompat
import androidx.core.content.ContextCompat.startActivity
import com.google.android.gms.location.Geofence
import com.google.android.gms.location.GeofencingClient
import com.google.android.gms.location.GeofencingRequest
import com.google.android.gms.location.LocationServices
import com.strukovnasamobor.samobornt.cardview.CardViewActivity
import com.strukovnasamobor.samobornt.detail.DetailActivity

const val GEOFENCE_RADIUS = 100
const val GEOFENCE_LOCATION_REQUEST_CODE = 5

class MapboxActivity : BaseActivity(), OnMapReadyCallback, PermissionsListener {

    private var permissionsManager: PermissionsManager = PermissionsManager(this)
    private lateinit var mapboxMap: MapboxMap
    private var mapView: MapView? = null
    private lateinit var connection: DBConnection
    private lateinit var geofencingClient: GeofencingClient


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        // Mapbox access token is configured here. This needs to be called either in your application
        // object or in the same activity which contains the mapview.
        Mapbox.getInstance(this, getString(R.string.mapbox_access_token))

        connection = DBConnection.getConnectionInstance(this)
        geofencingClient = LocationServices.getGeofencingClient(this)

        // This contains the MapView in XML and needs to be called after the access token is configured.
        setContentView(R.layout.activity_mapbox)
        super.initializeMenu()

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
            if (ContextCompat.checkSelfPermission(
                    applicationContext,
                    Manifest.permission.ACCESS_BACKGROUND_LOCATION
                ) != PackageManager.PERMISSION_GRANTED
            ) {
                ActivityCompat.requestPermissions(
                    this,
                    arrayOf(Manifest.permission.ACCESS_BACKGROUND_LOCATION),
                    GEOFENCE_LOCATION_REQUEST_CODE
                )
            }
        }

        val geofenceLocations = getLocationList()
        geofenceLocations.forEach {
            createGeofence(
                LatLng(
                    it.second,
                    it.third
                ), it.first!!, geofencingClient
            )
        }

        mapView = findViewById(R.id.mapView);
        mapView?.onCreate(savedInstanceState)
        mapView?.getMapAsync(this)



        }

    override fun onMapReady(mapboxMap: MapboxMap) {
        this.mapboxMap = mapboxMap
        super.locationComponent = mapboxMap.locationComponent;
        mapboxMap.setStyle(
            Style.Builder().fromUri(
                getString(R.string.mapbox_style_url)
            )
        ) {
            // Map is set up and the style has loaded. Now you can add data or make other map adjustments
            Log.e("mapbox", "loaded")
            mapboxMap.addOnMapClickListener { point: LatLng ->
                Log.e("mapbox", "mapclick")

                // Convert LatLng coordinates to screen pixel and only query the rendered features.
                val pixel = mapboxMap.projection.toScreenLocation(point)
                val features = mapboxMap.queryRenderedFeatures(pixel, "samobornt-markers")
                Log.e("mapbox", features.toString())

                // Get the first feature within the list if one exist
                if (features.size > 0) {
                    val feature = features[0]

                    // Ensure the feature has properties defined
                    for ((key, value) in feature.properties()!!.entrySet()) {
                        // Log all the properties
                        Log.e("mapbox", String.format("%s = %s", key, value))
                        if(key=="name"){
                        val INtent = Intent(this,DetailActivity::class.java)
                            .putExtra("locationName", value.toString())
                            startActivity(INtent)
                            Toast.makeText(this, value.toString(), Toast.LENGTH_LONG).show()
                            Log.e("mapbox open detail view: ", value.toString())}
                    }

                }
                true
            }
            /*
            try {
                val geoJsonUrl = URI("https://url-to-geojson-file.geojson")
                val geoJsonSource = GeoJsonSource("geojson-source", geoJsonUrl)
                it.addSource(geoJsonSource)
            } catch (exception: URISyntaxException) {
                Log.d("mapbox", "JSON file not found.")
            }*/
            enableLocationComponent(it)
        }
    }

    override fun onBackPressed() {
        moveTaskToBack(true)
    }

    @SuppressLint("MissingPermission")
    private fun enableLocationComponent(loadedMapStyle: Style) {
        // Check if permissions are enabled and if not request
        if (PermissionsManager.areLocationPermissionsGranted(this)) {
            // Create and customize the LocationComponent's options
            val customLocationComponentOptions = LocationComponentOptions.builder(this)
                .trackingGesturesManagement(true)
                .accuracyColor(ContextCompat.getColor(this, R.color.DarkRed))
                .build()

            val locationComponentActivationOptions = LocationComponentActivationOptions.builder(
                this,
                loadedMapStyle
            )
                .locationComponentOptions(customLocationComponentOptions)
                .build()
            // Get an instance of the LocationComponent and then adjust its settings
            mapboxMap.locationComponent.apply {
                // Activate the LocationComponent with options
                activateLocationComponent(locationComponentActivationOptions)

                // Enable to make the LocationComponent visible
                isLocationComponentEnabled = true

                // Set the LocationComponent's camera mode
                cameraMode = CameraMode.TRACKING_GPS

                // Set the LocationComponent's render mode
                renderMode = RenderMode.COMPASS
            }
            mapboxMap?.locationComponent.addOnCameraTrackingChangedListener(object :
                OnCameraTrackingChangedListener {
                override fun onCameraTrackingDismissed() {
                    // Tracking has been dismissed
                }

                override fun onCameraTrackingChanged(currentMode: Int) {
                    // CameraMode has been updated
                    if(currentMode == CameraMode.TRACKING_GPS) {
                        val mapMenu = findViewById<ImageView>(R.id.map_menu)
                        mapMenu.visibility = View.VISIBLE
                        val locationMenu = findViewById<ImageView>(R.id.location_menu)
                        locationMenu.visibility = View.INVISIBLE
                    } else{
                        val mapMenu = findViewById<ImageView>(R.id.map_menu)
                        mapMenu.visibility = View.INVISIBLE
                        val locationMenu = findViewById<ImageView>(R.id.location_menu)
                        locationMenu.visibility = View.VISIBLE
                    }
                }
            })
        }
        else {
            permissionsManager = PermissionsManager(this)
            permissionsManager.requestLocationPermissions(this)
        }
    }

    override fun onRequestPermissionsResult(
        requestCode: Int,
        permissions: Array<String>,
        grantResults: IntArray
    ) {
        permissionsManager.onRequestPermissionsResult(requestCode, permissions, grantResults)
    }

    override fun onExplanationNeeded(permissionsToExplain: List<String>) {
        Toast.makeText(this, "Permission needed.", Toast.LENGTH_LONG).show()
    }

    override fun onPermissionResult(granted: Boolean) {
        if (granted) {
            enableLocationComponent(mapboxMap.style!!)
        } else {
            Toast.makeText(this, "Permission not granted.", Toast.LENGTH_LONG).show()
            finish()
        }
    }

    override fun onStart() {
        super.onStart()
        mapView?.onStart()
    }

    override fun onResume() {
        super.onResume()
        mapView?.onResume()
    }

    override fun onPause() {
        super.onPause()
        mapView?.onPause()
    }

    override fun onStop() {
        super.onStop()
        mapView?.onStop()
    }

    override fun onSaveInstanceState(outState: Bundle) {
        super.onSaveInstanceState(outState)
        mapView?.onSaveInstanceState(outState)
    }

    override fun onDestroy() {
        super.onDestroy()
        mapView?.onDestroy()
    }

    override fun onLowMemory() {
        super.onLowMemory()
        mapView?.onLowMemory()
    }

    private fun createGeofence(location: LatLng, key: String, geofencingClient: GeofencingClient) {
        val geofence = Geofence.Builder()
            .setRequestId(key)
            .setCircularRegion(location.latitude, location.longitude, GEOFENCE_RADIUS.toFloat())
            .setExpirationDuration(Geofence.NEVER_EXPIRE)
            .setTransitionTypes(Geofence.GEOFENCE_TRANSITION_ENTER)
            .build()

        val geofenceRequest = GeofencingRequest.Builder()
            .setInitialTrigger(GeofencingRequest.INITIAL_TRIGGER_ENTER)
            .addGeofence(geofence)
            .build()

        val intent = Intent(this, GeofenceReceiver::class.java)

        val pendingIntent = PendingIntent.getBroadcast(
            applicationContext,
            0,
            intent,
            PendingIntent.FLAG_UPDATE_CURRENT
        )

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
            if (ContextCompat.checkSelfPermission(
                    applicationContext,
                    Manifest.permission.ACCESS_BACKGROUND_LOCATION
                ) != PackageManager.PERMISSION_GRANTED
            ) {
                ActivityCompat.requestPermissions(
                    this,
                    arrayOf(Manifest.permission.ACCESS_BACKGROUND_LOCATION),
                    GEOFENCE_LOCATION_REQUEST_CODE
                )
            } else {
                geofencingClient.addGeofences(geofenceRequest, pendingIntent)
            }
        } else {
            geofencingClient.addGeofences(geofenceRequest, pendingIntent)
        }
    }

    companion object {
        fun showNotification(context: Context?, message: String) {
            val CHANNEL_ID = "REMINDER_NOTIFICATION_CHANNEL"
            var notificationId = 123
            notificationId += Random(notificationId).nextInt(1, 30)

            val notificationString = "Došli ste do: $message, kliknite ovdje da pročitate više!"

            val resultIntent = Intent(context, DetailActivity::class.java)
                .putExtra("locationNot", message)

            val resultPendingIntent = PendingIntent.getActivity(context, 1, resultIntent, PendingIntent.FLAG_UPDATE_CURRENT)

            val notificationBuilder = NotificationCompat.Builder(context!!.applicationContext, CHANNEL_ID)
                .setSmallIcon(R.drawable.marker_custom)
                .setContentTitle(context.getString(R.string.app_name))
                .setContentText(notificationString)
                .setAutoCancel(true)
                .setContentIntent(resultPendingIntent)
                .setStyle(
                    NotificationCompat.BigTextStyle()
                        .bigText(notificationString)
                )
                .setPriority(NotificationCompat.PRIORITY_DEFAULT)

            val notificationManager = context.getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager

            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
                val channel = NotificationChannel(
                    CHANNEL_ID,
                    context.getString(R.string.app_name),
                    NotificationManager.IMPORTANCE_DEFAULT
                ).apply {
                    description = context.getString(R.string.app_name)
                }
                notificationManager.createNotificationChannel(channel)
            }
            //Toast.makeText(context, "Sending notification!", Toast.LENGTH_SHORT).show()
            notificationManager.notify(notificationId, notificationBuilder.build())
        }
    }

    private fun getLocationList(): MutableList<Triple<String, Double, Double>> {
        val locationList: MutableList<Triple<String, Double, Double>> = mutableListOf()
        val cardsListLocale = resources.configuration.locales[0].toString()
        val correctTable = if (cardsListLocale == "hr") TABLE_NAME_HRV else TABLE_NAME_ENG
        val cursor: Cursor = connection.getFetchAllCursor(correctTable)
        if (cursor.moveToFirst()) {
            while (!cursor.isAfterLast) {
                val locationName = cursor.getString(cursor.getColumnIndex(C_NAME))
                val latitude = cursor.getDouble(cursor.getColumnIndex(C_LATITUDE))
                val longitude = cursor.getDouble(cursor.getColumnIndex(C_LONGITUDE))
                locationList.add(Triple(locationName, latitude, longitude))
                cursor.moveToNext()
            }
        }
        return locationList
    }

}