package com.strukovnasamobor.samobornt

import android.graphics.Color
import android.os.AsyncTask
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.mapbox.geojson.FeatureCollection
import com.mapbox.mapboxsdk.Mapbox
import com.mapbox.mapboxsdk.maps.MapView
import com.mapbox.mapboxsdk.maps.MapboxMap
import com.mapbox.mapboxsdk.maps.OnMapReadyCallback
import com.mapbox.mapboxsdk.maps.Style
import com.mapbox.mapboxsdk.style.layers.LineLayer
import com.mapbox.mapboxsdk.style.layers.Property
import com.mapbox.mapboxsdk.style.layers.PropertyFactory
import com.mapbox.mapboxsdk.style.sources.GeoJsonSource
import timber.log.Timber
import java.io.InputStream
import java.lang.ref.WeakReference
import java.util.*


/**
 * Draw a polyline by parsing a GeoJSON file with the Mapbox Android SDK.
 */
@Suppress("DEPRECATION")
class DrawGeojsonLineActivity : AppCompatActivity(), OnMapReadyCallback {
    private var mapView: MapView? = null
    private var mapboxMap: MapboxMap? = null
    public override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

// Mapbox access token is configured here. This needs to be called either in your application
// object or in the same activity which contains the mapview.
        Mapbox.getInstance(this, getString(R.string.mapbox_access_token))

// This contains the MapView in XML and needs to be called after the access token is configured.
        setContentView(R.layout.activity_prob)
        mapView = findViewById(R.id.mapView)
        mapView?.onCreate(savedInstanceState)
        mapView?.getMapAsync(this)
    }

    override fun onMapReady(mapboxMap: MapboxMap) {
        this.mapboxMap = mapboxMap
        mapboxMap.setStyle(
            Style.MAPBOX_STREETS
        ) { LoadGeoJson(this@DrawGeojsonLineActivity).execute() }
    }

    private fun drawLines(featureCollection: FeatureCollection) {
        if (mapboxMap != null) {
            mapboxMap!!.getStyle { style: Style ->
                if (featureCollection.features() != null) {
                    if (featureCollection.features()!!.size > 0) {
                        style.addSource(GeoJsonSource("line-source", featureCollection))

// The layer properties for our line. This is where we make the line dotted, set the
// color, etc.
                        style.addLayer(
                            LineLayer("linelayer", "line-source")
                                .withProperties(
                                    PropertyFactory.lineCap(Property.LINE_CAP_SQUARE),
                                    PropertyFactory.lineJoin(Property.LINE_JOIN_MITER),
                                    PropertyFactory.lineOpacity(.7f),
                                    PropertyFactory.lineWidth(7f),
                                    PropertyFactory.lineColor(Color.parseColor("#3bb2d0"))
                                )
                        )
                    }
                }
            }
        }
    }

    class LoadGeoJson internal constructor(activity: DrawGeojsonLineActivity) :
        AsyncTask<Void?, Void?, FeatureCollection?>() {
        private val weakReference: WeakReference<DrawGeojsonLineActivity>
        protected override fun doInBackground(vararg params: Void?): FeatureCollection? {
            try {
                val activity = weakReference.get()
                if (activity != null) {
                    val inputStream = activity.assets.open("example.geojson")
                    return FeatureCollection.fromJson(convertStreamToString(inputStream))
                }
            } catch (exception: Exception) {
                Timber.e("Exception Loading GeoJSON: %s", exception.toString())
            }
            return null
        }

        override fun onPostExecute(featureCollection: FeatureCollection?) {
            super.onPostExecute(featureCollection)
            val activity = weakReference.get()
            if (activity != null && featureCollection != null) {
                activity.drawLines(featureCollection)
            }
        }

        companion object {
            fun convertStreamToString(`is`: InputStream?): String {
                val scanner = Scanner(`is`).useDelimiter("\\A")
                return if (scanner.hasNext()) scanner.next() else ""
            }
        }

        init {
            weakReference = WeakReference(activity)
        }
    }

    public override fun onResume() {
        super.onResume()
        mapView!!.onResume()
    }

    override fun onStart() {
        super.onStart()
        mapView!!.onStart()
    }

    override fun onStop() {
        super.onStop()
        mapView!!.onStop()
    }

    public override fun onPause() {
        super.onPause()
        mapView!!.onPause()
    }

    public override fun onSaveInstanceState(outState: Bundle) {
        super.onSaveInstanceState(outState)
        mapView!!.onSaveInstanceState(outState)
    }

    override fun onLowMemory() {
        super.onLowMemory()
        mapView!!.onLowMemory()
    }

    public override fun onDestroy() {
        super.onDestroy()
        mapView!!.onDestroy()
    }
}