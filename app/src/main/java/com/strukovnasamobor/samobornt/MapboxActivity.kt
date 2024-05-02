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
import android.view.Menu
import android.view.MenuItem
import android.view.View
import android.widget.ImageView
import android.widget.Toast
import androidx.appcompat.view.menu.ActionMenuItemView
import androidx.appcompat.view.menu.MenuView
import androidx.core.app.ActivityCompat
import androidx.core.app.NotificationCompat
import androidx.core.content.ContextCompat
import androidx.navigation.findNavController
import com.google.android.gms.location.Geofence
import com.google.android.gms.location.GeofencingClient
import com.google.android.gms.location.GeofencingRequest
import com.google.android.gms.location.LocationServices
import com.mapbox.android.core.permissions.PermissionsListener
import com.mapbox.android.core.permissions.PermissionsManager
import com.google.android.material.bottomnavigation.BottomNavigationView
import java.util.*
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
import com.strukovnasamobor.samobornt.cardview.CardListHolder
import com.strukovnasamobor.samobornt.cardview.CardViewActivity
import com.strukovnasamobor.samobornt.detail.DetailActivity
import com.strukovnasamobor.samobornt.services.*
import kotlin.random.Random

const val GEOFENCE_RADIUS = 50
private lateinit var currentLocale: String
private lateinit var geofenceLocations: MutableList<HashMap<String, String>>

@Suppress("DEPRECATION", "UNNECESSARY_SAFE_CALL")
class MapboxActivity : BaseActivity(), OnMapReadyCallback, PermissionsListener {
    private var permissionsManager: PermissionsManager = PermissionsManager(this)
    private lateinit var mapboxMap: MapboxMap
    private var mapView: MapView? = null
    private var enabledLocationComponent: Boolean = false
    private lateinit var connection: DBConnection
    private lateinit var geofencingClient: GeofencingClient
    private lateinit var locationMenu: ImageView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        mapboxActivity = this
        // Mapbox access token is configured here. This needs to be called either in your application
        // object or in the same activity which contains the mapview.
        Mapbox.getInstance(this, getString(R.string.mapbox_access_token))

        currentLocale = LocaleHelper.getLanguage(this)
        connection = DBConnection.getConnectionInstance(this)
        geofencingClient = LocationServices.getGeofencingClient(this)

        // This contains the MapView in XML and needs to be called after the access token is configured.
        setContentView(R.layout.activity_mapbox)
        locationMenu = findViewById<ImageView>(R.id.location_menu)
        super.initializeMenu()

        geofenceLocations = getLocationList(currentLocale)
        geofenceLocations.forEach {
            createGeofence(
                LatLng(
                    it["latitude"]!!.toDouble(),
                    it["longitude"]!!.toDouble()
                ), it["locationId"]!!, geofencingClient
            )
        }
        //Log.e("geofence_create", geofenceLocations.toString())

        mapView = findViewById(R.id.mapView)
        mapView?.onCreate(savedInstanceState)
        mapView?.getMapAsync(this)
        val bottomNavigationView = findViewById<BottomNavigationView>(R.id.bottom_navigation)
        bottomNavigationView.invalidate()
        bottomNavigationView.selectedItemId = R.id.ic_map
        bottomNavigationView.setOnNavigationItemSelectedListener(BottomNavigationView.OnNavigationItemSelectedListener { menuItem ->
            when (menuItem.itemId) {
                R.id.ic_sights -> {
                    startActivity(Intent(applicationContext, CardViewActivity::class.java))
                    overridePendingTransition(0, 0)
                    return@OnNavigationItemSelectedListener true
                }
                R.id.ic_map -> return@OnNavigationItemSelectedListener true
                R.id.ic_routes -> {
                    startActivity(Intent(applicationContext, RoutesCardViewActivity::class.java))
                    overridePendingTransition(0, 0)
                    return@OnNavigationItemSelectedListener true
                }
            }
            false
        })
    }

    fun changeLanguage(newLanguage: String) {
        if (LocaleHelper.getLanguage(this) != currentLocale) {
            val requestIdList: MutableList<String> = mutableListOf()
            geofenceLocations.forEach {
                requestIdList.add(it["locationId"]!!)
            }
            geofencingClient.removeGeofences(requestIdList)
            currentLocale = LocaleHelper.getLanguage(this)
            geofenceLocations = getLocationList(currentLocale)
            geofenceLocations.forEach {
                createGeofence(
                    LatLng(
                        it["latitude"]!!.toDouble(),
                        it["longitude"]!!.toDouble()
                    ), it["locationId"]!!, geofencingClient
                )
            }
            //Log.e("geofence_create", geofenceLocations.toString())
        }
        if (currentLocale == "hr" || currentLocale == "hr_HR") {
            val navView = findViewById<BottomNavigationView>(R.id.bottom_navigation)
            var menuItem1 = navView.menu.findItem(R.id.ic_routes)
            var menuItem2 = navView.menu.findItem(R.id.ic_map)
            var menuItem3 = navView.menu.findItem(R.id.ic_sights)
            menuItem1.title = "Rute"
            menuItem2.title = "Karta"
            menuItem3.title = "Znamenitosti"

        } else {
            val navView = findViewById<BottomNavigationView>(R.id.bottom_navigation)
            var menuItem1 = navView.menu.findItem(R.id.ic_routes)
            var menuItem2 = navView.menu.findItem(R.id.ic_map)
            var menuItem3 = navView.menu.findItem(R.id.ic_sights)
            menuItem1.title = "Routes"
            menuItem2.title = "Map"
            menuItem3.title = "Sights"
        }
        LocaleHelper.setLanguage(this, newLanguage)
        onMapReady(mapboxMap)
    }

    override fun onMapReady(mapboxMap: MapboxMap) {
        this.mapboxMap = mapboxMap
        super.locationComponent = mapboxMap.locationComponent
        //Log.e("mapbox", resources.getString(resources.getIdentifier(getString(R.string.mapbox_style), "string", packageName)))
        mapboxMap.setStyle(
            Style.Builder().fromUri(
                resources.getString(
                    resources.getIdentifier(
                        getString(R.string.mapbox_style), "string", packageName
                    )
                )
            )
        ) {
            // Map is set up and the style has loaded. Now you can add data or make other map adjustments
            //Log.e("mapbox", "loaded")
            mapboxMap.addOnMapClickListener { point: LatLng ->
                mapOnClickListener(point)
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
            if (!enabledLocationComponent)
                enableLocationComponent(it)
        }
    }

    private fun mapOnClickListener(point: LatLng) {
        /*
        Log.e("mapbox", "mapclick")
        Log.e("mapbox", mapboxMap.cameraPosition.target.toString())
        Log.e("mapbox", mapboxMap.cameraPosition.zoom.toString())
        Log.e("mapbox", mapboxMap.cameraPosition.bearing.toString())
        */
        // Convert LatLng coordinates to screen pixel and only query the rendered features.
        val pixel = mapboxMap.projection.toScreenLocation(point)
        val features = mapboxMap.queryRenderedFeatures(pixel, "samobornt-markers")
        //Log.e("mapbox", features.toString())

        // Get the first feature within the list if one exist
        if (features.size > 0) {
            val feature = features[0]

            // Ensure the feature has properties defined
            for ((key, value) in feature.properties()!!.entrySet()) {
                //Log.e("mapbox", String.format("%s = %s", key, value))
                if (key == "id") {
                    val intent = Intent(this, DetailActivity::class.java)
                    intent.putExtra("locationId", value.toString())
                    intent.putExtra("fromMapbox", true)
                    startActivity(intent)
                    //Toast.makeText(this, value.toString(), Toast.LENGTH_LONG).show()
                    //Log.e("mapbox open detail view: ", value.toString())
                }
            }
        }
    }

    override fun onBackPressed() {
        moveTaskToBack(true)
        val bottomNavigationView = findViewById<BottomNavigationView>(R.id.bottom_navigation)
        bottomNavigationView.invalidate()
        bottomNavigationView.selectedItemId = R.id.ic_map
        bottomNavigationView.setOnNavigationItemSelectedListener(BottomNavigationView.OnNavigationItemSelectedListener { menuItem ->
            when (menuItem.itemId) {
                R.id.ic_sights -> {
                    startActivity(Intent(applicationContext, CardViewActivity::class.java))
                    overridePendingTransition(0, 0)
                    return@OnNavigationItemSelectedListener true
                }
                R.id.ic_map -> return@OnNavigationItemSelectedListener true
                R.id.ic_routes -> {
                    startActivity(Intent(applicationContext, RoutesCardViewActivity::class.java))
                    overridePendingTransition(0, 0)
                    return@OnNavigationItemSelectedListener true
                }
            }
            false
        })
        recreate()
    }

    @SuppressLint("MissingPermission")
    private fun enableLocationComponent(loadedMapStyle: Style) {
        enabledLocationComponent = true
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
                cameraMode = CameraMode.NONE
                locationMenu.visibility = View.VISIBLE

                // Set the LocationComponent's render mode
                renderMode = RenderMode.COMPASS
            }
            mapboxMap.locationComponent.addOnCameraTrackingChangedListener(object :
                OnCameraTrackingChangedListener {
                override fun onCameraTrackingDismissed() {
                    // Tracking has been dismissed
                }

                override fun onCameraTrackingChanged(currentMode: Int) {
                    // CameraMode has been updated
                    if (currentMode == CameraMode.TRACKING_GPS) {
                        locationMenu.visibility = View.INVISIBLE
                    } else {
                        locationMenu.visibility = View.VISIBLE
                    }
                }
            })
        } else {
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

    override fun onNewIntent(intent: Intent?) {
        super.onNewIntent(intent)
        mapView?.onResume()

        val bundle: Bundle? = intent?.extras
        val bottomNavigationView = findViewById<BottomNavigationView>(R.id.bottom_navigation)
        bottomNavigationView.selectedItemId = R.id.ic_map
        bottomNavigationView.setOnNavigationItemSelectedListener(BottomNavigationView.OnNavigationItemSelectedListener { menuItem ->
            when (menuItem.itemId) {
                R.id.ic_sights -> {
                    startActivity(Intent(applicationContext, CardViewActivity::class.java))
                    overridePendingTransition(0, 0)
                    return@OnNavigationItemSelectedListener true
                }
                R.id.ic_map -> return@OnNavigationItemSelectedListener true
                R.id.ic_routes -> {
                    startActivity(Intent(applicationContext, RoutesCardViewActivity::class.java))
                    overridePendingTransition(0, 0)
                    return@OnNavigationItemSelectedListener true
                }
            }
            false

        })
        if (bundle?.get("latitude") != null) {
            val lat = bundle.get("latitude") as Double
            val lng = bundle.get("longitude") as Double
            val dest = LatLng(lat, lng)
            mapboxMap.moveCamera(
                com.mapbox.mapboxsdk.camera.CameraUpdateFactory.newLatLngZoom(
                    dest,
                    20.0
                )
            )
        }
        onMapReady(mapboxMap)
    }

    override fun onStart() {
        super.onStart()
        mapView?.onStart()
    }

    override fun onResume() {
        super.onResume()
        mapView?.onResume()
        val bottomNavigationView = findViewById<BottomNavigationView>(R.id.bottom_navigation)
        bottomNavigationView.selectedItemId = R.id.ic_map
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

    private fun createGeofence(
        location: LatLng,
        locationId: String,
        geofencingClient: GeofencingClient
    ) {
        val geofence: Geofence = Geofence.Builder()
            .setRequestId(locationId)
            .setCircularRegion(location.latitude, location.longitude, GEOFENCE_RADIUS.toFloat())
            .setExpirationDuration(Geofence.NEVER_EXPIRE)
            .setTransitionTypes(Geofence.GEOFENCE_TRANSITION_ENTER)
            .build()

        val geofenceRequest = GeofencingRequest.Builder()
            .setInitialTrigger(GeofencingRequest.INITIAL_TRIGGER_ENTER)
            .addGeofence(geofence)
            .build()

        val intent = Intent(this, GeofenceReceiver::class.java)
        intent.putExtra("locationId", locationId)

        val pendingIntent = PendingIntent.getBroadcast(
            this,
            REQUEST_CODE,
            intent,
            PendingIntent.FLAG_UPDATE_CURRENT or PendingIntent.FLAG_IMMUTABLE
        )
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
            if (ContextCompat.checkSelfPermission(
                    this,
                    Manifest.permission.ACCESS_FINE_LOCATION
                ) != PackageManager.PERMISSION_GRANTED
            ) {
                ActivityCompat.requestPermissions(
                    this,
                    arrayOf(
                        Manifest.permission.ACCESS_FINE_LOCATION
                        //,Manifest.permission.ACCESS_BACKGROUND_LOCATION
                    ),
                    REQUEST_CODE
                )
            } else {
                geofencingClient.addGeofences(geofenceRequest, pendingIntent)?.run {
                    addOnSuccessListener {
                        //Log.e("geofence_create", "added $locationId $location")
                    }
                    addOnFailureListener {
                        //Log.e("geofence_create", "failure $locationId $location")
                    }
                }
            }
        } else {
            geofencingClient.addGeofences(geofenceRequest, pendingIntent)?.run {
                addOnSuccessListener {
                    //Log.e("geofence_create", "added $locationId $location")
                }
                addOnFailureListener {
                    //Log.e("geofence_create", "failure $locationId $location")
                }
            }
        }
    }

    companion object {
        fun showNotification(context: Context, locationId: String) {
            var locationName: String? = ""
            geofenceLocations.forEach {
                if(it["locationId"]==locationId) {
                    locationName = it["locationName"]
                }
            }

            val CHANNEL_ID = "REMINDER_NOTIFICATION_CHANNEL"
            var notificationId = 123
            notificationId += Random(notificationId).nextInt(1, 30)

            val notificationString = context.getString(R.string.geofence_notification_1) + " " + locationName +
                    context.getString(R.string.geofence_notification_2)
            //Toast.makeText(context, notificationString, Toast.LENGTH_SHORT).show()

            val resultIntent = Intent(context, DetailActivity::class.java)
                .putExtra("locationId", locationId)

            val resultPendingIntent = PendingIntent.getActivity(
                context,
                1,
                resultIntent,
                PendingIntent.FLAG_UPDATE_CURRENT or PendingIntent.FLAG_IMMUTABLE
            )

            val notificationBuilder =
                NotificationCompat.Builder(context.applicationContext, CHANNEL_ID)
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

            val notificationManager =
                context.getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager

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

    private fun getLocationList(locale: String): MutableList<HashMap<String, String>> {
        val locationList: MutableList<HashMap<String, String>> = mutableListOf()
        val correctTable = if (locale == "hr") TABLE_NAME_HRV else TABLE_NAME_ENG
        val cursor: Cursor = connection.getFetchAllCursor(correctTable)
        if (cursor.moveToFirst()) {
            while (!cursor.isAfterLast) {
                val locationName = cursor.getString(cursor.getColumnIndex(C_NAME))
                val latitude = cursor.getDouble(cursor.getColumnIndex(C_LATITUDE)).toString()
                val longitude = cursor.getDouble(cursor.getColumnIndex(C_LONGITUDE)).toString()
                val locationId = cursor.getString(cursor.getColumnIndex(C_ID))
                val newHashMap: HashMap<String, String> = hashMapOf(
                    Pair("locationName", locationName), Pair("latitude", latitude),
                    Pair("longitude", longitude), Pair("locationId", locationId)
                )
                //Log.e("geofence", "$locationId $latitude $longitude")
                locationList.add(newHashMap)
                cursor.moveToNext()
            }
        }
        return locationList
    }
}
