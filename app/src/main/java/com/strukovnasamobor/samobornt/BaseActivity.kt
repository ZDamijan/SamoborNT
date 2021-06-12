package com.strukovnasamobor.samobornt

import android.app.Dialog
import android.content.ActivityNotFoundException
import android.content.Context
import android.content.Intent
import android.net.Uri
import android.os.Bundle
import android.text.method.LinkMovementMethod
import android.util.Log
import android.view.View
import android.view.Window
import android.widget.*
import androidx.appcompat.app.AppCompatActivity
import com.mapbox.mapboxsdk.location.LocationComponent
import com.mapbox.mapboxsdk.location.modes.CameraMode
import com.strukovnasamobor.samobornt.api.startActivity
import com.strukovnasamobor.samobornt.cardview.CardListHolder
import com.strukovnasamobor.samobornt.cardview.CardViewActivity
import com.strukovnasamobor.samobornt.detail.DetailActivity
import com.strukovnasamobor.samobornt.services.LocaleHelper


var mapboxActivity : MapboxActivity? = null

abstract class BaseActivity : AppCompatActivity() {
    protected var locationComponent: LocationComponent? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.toolbar)
        setSupportActionBar(findViewById(R.id.toolbar))
    }

    override fun attachBaseContext(newBase: Context?) {
        super.attachBaseContext(newBase)
        LocaleHelper.setLanguage(this)
    }

    fun initializeMenu() {
        val locationMenu = findViewById<ImageView>(R.id.location_menu)
        locationMenu.setOnClickListener {
            startActivity<MapboxActivity>()
            locationComponent?.cameraMode = CameraMode.TRACKING_GPS
        }

        val imageViewMenu = findViewById<ImageView>(R.id.image_view_menu)
        imageViewMenu.setOnClickListener {
            val popupMenu = PopupMenu(this, it)
            popupMenu.setOnMenuItemClickListener { item ->
                when (item.itemId) {
                    R.id.menu_mapShow -> {
                        startActivity<MapboxActivity>()
                        true
                    }
                    R.id.menu_changeLanguage -> {
                        val dialog = Dialog(this)
                        val currentLang = LocaleHelper.getLanguage(this)
                        dialog.requestWindowFeature(Window.FEATURE_NO_TITLE)
                        dialog.setCancelable(true)
                        dialog.setCanceledOnTouchOutside(true)
                        dialog.setContentView(R.layout.language_dialog)
                        val languageRadioGroup: RadioGroup =
                            dialog.findViewById(R.id.rdg_languages) as RadioGroup
                        languageRadioGroup.check(R.id.rdb_en)
                        for (i in 0..languageRadioGroup.childCount) {
                            if (languageRadioGroup.getChildAt(i).tag == currentLang) {
                                languageRadioGroup.check(languageRadioGroup.getChildAt(i).id)
                                break
                            }
                        }
                        dialog.findViewById<Button>(R.id.btn_close).setOnClickListener {
                            dialog.cancel()
                        }
                        dialog.findViewById<Button>(R.id.btn_save).setOnClickListener {
                            val checkedRadioButton: RadioButton = dialog.findViewById(
                                languageRadioGroup.checkedRadioButtonId
                            ) as RadioButton
                            changeLanguage(checkedRadioButton.tag.toString())
                            dialog.cancel()
                        }
                        dialog.show()
                        true
                    }
                    R.id.menu_sights -> {
                        //Toast.makeText(this, "Sights", Toast.LENGTH_SHORT).show()
                        startActivity<CardViewActivity>()
                        true
                    }
                    /*R.id.menu_augmentedReality -> {
                        //Toast.makeText(this, "Augmented Reality", Toast.LENGTH_SHORT).show()
                        val intent = Intent(this, UnityHolderActivity::class.java)
                        intent.putExtra("sceneName", "LauncherScreen")
                        startActivity(intent)
                        true
                    }*/
                    R.id.menu_about -> {
                        val aboutPopupWindow = Dialog(this)
                        aboutPopupWindow.requestWindowFeature(Window.FEATURE_NO_TITLE)
                        aboutPopupWindow.setCancelable(true)
                        aboutPopupWindow.setCanceledOnTouchOutside(true)
                        aboutPopupWindow.setContentView(R.layout.about)
                        aboutPopupWindow.show()
                        true
                        /*
                        Toast.makeText(
                            this,
                            "Created by: Ekonomska, turistička i ugostiteljska škola, Samobor\nPartner: Srednja strukovnasamobor škola, Samobor\nSupported by: Ministry of Tourism and Sports\nVersion: 2021 1.0",
                            Toast.LENGTH_LONG
                        ).show()
                        true*/
                    }
                    R.id.virtual_tour -> {
                        val browserIntent = Intent(
                            Intent.ACTION_VIEW,
                            Uri.parse("https://www.samobor.hr/virtualna-tura/")
                        )
                        try {
                            startActivity(browserIntent)
                        } catch (ex: ActivityNotFoundException) {
                        }
                        true
                    }
                    else -> false
                }
            }
            popupMenu.inflate(R.menu.menu_main)
            popupMenu.show()
        }
    }

    private fun changeLanguage(languageToLoad: String) {
        LocaleHelper.setLanguage(this, languageToLoad)
        CardListHolder.getCardListHolderInstance(this).changeCardsLanguage(languageToLoad)
        mapboxActivity?.changeLanguage(languageToLoad)

        when (this::class.java.simpleName) {
            "CardViewActivity" -> {
                this.finish()
                val intent = Intent(this, CardViewActivity::class.java)
                intent.putExtra("languageChanged", true)
                intent.putExtra("changeToLanguage", languageToLoad)
                startActivity(intent)
            }
            "DetailActivity" -> {
                val intent = Intent(this, DetailActivity::class.java)
                intent.putExtra("languageChanged", true)
                intent.putExtra("changeToLanguage", languageToLoad)
                startActivity(intent)
            }
            "RoutesCardViewActivity" -> {
                val intent = Intent(this, RoutesCardViewActivity::class.java)
                intent.putExtra("languageChanged", true)
                intent.putExtra("changeToLanguage", languageToLoad)
                startActivity(intent)
            }
        }
    }
}