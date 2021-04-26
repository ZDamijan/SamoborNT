package com.strukovnasamobor.samobornt

import android.app.Dialog
import android.content.ActivityNotFoundException
import android.content.Intent
import android.content.res.Configuration
import android.net.Uri
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.Window
import android.widget.*
import com.strukovnasamobor.samobornt.api.startActivity
import java.util.*

abstract class BaseActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.toolbar)
        setSupportActionBar(findViewById(R.id.toolbar))
    }
    public fun initlizeMenu() {
        val imageViewMenu = findViewById<ImageView>(R.id.imageViewMenu)
        imageViewMenu.setOnClickListener {
            val popupMenu = PopupMenu(this, it)
            popupMenu.setOnMenuItemClickListener { item ->
                when (item.itemId) {
                    R.id.menu_mapShow -> {
                        startActivity<MapsActivity>()
                        true
                    }
                    R.id.menu_changeLanguage -> {
                        val dialog = Dialog(this)
                        @Suppress("DEPRECATION") val currentLang =
                            resources.configuration.locale.language
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
                                break;
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
                        Toast.makeText(this, "Sights", Toast.LENGTH_SHORT).show()
                        startActivity<CardView>()
                        true
                    }
                    R.id.menu_augmentedReality -> {
                        Toast.makeText(this, "Augmented Reality", Toast.LENGTH_SHORT).show()
                        val intent = Intent(this, UnityHolderActivity::class.java)
                        intent.putExtra("sceneName", "LauncherScreen")
                        startActivity(intent)
                        true
                    }
                    R.id.menu_about -> {
                        Toast.makeText(
                            this,
                            "Created by: Ekonomska, turistička i ugostiteljska škola, Samobor\nPartner: Srednja strukovnasamobor škola, Samobor\nSupported by: Ministry of Tourism and Sports\nVersion: 2021 1.0",
                            Toast.LENGTH_LONG
                        ).show()
                        true
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
        val locale = Locale(languageToLoad)
        Locale.setDefault(locale)
        val config = Configuration()
        config.setLocale(locale)
        @Suppress("DEPRECATION")
        baseContext.resources.updateConfiguration(
            config,
            baseContext.resources.displayMetrics
        )
    }
}