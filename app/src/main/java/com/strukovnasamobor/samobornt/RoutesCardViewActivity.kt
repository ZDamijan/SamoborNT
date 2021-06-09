package com.strukovnasamobor.samobornt

import android.content.Intent
import android.media.Image
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.Parcelable
import android.widget.ImageView
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.bottomnavigation.BottomNavigationView
import com.strukovnasamobor.samobornt.cardview.Card
import com.strukovnasamobor.samobornt.cardview.CardListHolder
import com.strukovnasamobor.samobornt.cardview.CardViewActivity
import com.strukovnasamobor.samobornt.cardview.CardViewAdapter
import com.strukovnasamobor.samobornt.detail.DetailActivity
import com.strukovnasamobor.samobornt.services.DBConnection
import com.strukovnasamobor.samobornt.services.LocaleHelper

import com.strukovnasamobor.samobornt.services.TABLE_NAME_ENG
import com.strukovnasamobor.samobornt.services.TABLE_NAME_HRV
private var recyclerViewState: Parcelable? = null
private  var cardListLocale: String? = null
class RoutesCardViewActivity : BaseActivity() {
    private lateinit var connection: DBConnection
    private lateinit var cardListHolder: CardListHolder
    private lateinit var recyclerView: RecyclerView
    private lateinit var cardViewAdapter: CardViewAdapter

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_routes_card_view)
        super.initializeMenu()
        val bottomNavigationView = findViewById<BottomNavigationView>(R.id.bottom_navigation)


        recyclerView = findViewById(R.id.recycler_view)
        connection = DBConnection.getConnectionInstance(this)
        cardListHolder = CardListHolder.getCardListHolderInstance(this)
        if (cardListLocale == null) {
            cardListLocale = resources.configuration.locales[0].toString()
        }

        if (resources.configuration.locales[0].toString() != cardListLocale) {
            cardListLocale = resources.configuration.locales[0].toString()
            cardListHolder.changeRoutesLanguage(cardListLocale!!)
        }
        else if (intent.extras != null && intent.extras!!.getBoolean("languageChanged")) {
            cardListLocale = intent.extras!!.getString("changeToLanguage")
            cardListHolder.changeRoutesLanguage(cardListLocale!!)
        }
        bottomNavigationView.selectedItemId = R.id.ic_routes
        bottomNavigationView.setOnNavigationItemSelectedListener(BottomNavigationView.OnNavigationItemSelectedListener { menuItem ->
            when (menuItem.itemId) {
                R.id.ic_sights -> {
                    startActivity(Intent(applicationContext, CardViewActivity::class.java))
                    overridePendingTransition(0, 0)
                    return@OnNavigationItemSelectedListener true
                }
                R.id.ic_map -> {
                    startActivity(Intent(applicationContext, MapboxActivity::class.java))
                    overridePendingTransition(0, 0)
                    return@OnNavigationItemSelectedListener true
                }
                R.id.ic_routes -> return@OnNavigationItemSelectedListener true


            }
            false
        })
        cardViewAdapter = CardViewAdapter({ card -> adapterOnClick(card) }, cardListHolder.getRouteList())
        recyclerView.adapter = cardViewAdapter

        /*if (LocaleHelper.getLanguage(this) == "hr" || LocaleHelper.getLanguage(this) == "hr_HR")
        {
            slika1.setImageResource(R.drawable.plava_ruta_hrv)
            slika2.setImageResource(R.drawable.crvena_ruta_hrv)
            slika3.setImageResource(R.drawable.crna_ruta_hrv)
        }
        else {
            slika1.setImageResource(R.drawable.plava_ruta_eng)
            slika2.setImageResource(R.drawable.crvena_ruta_eng)
            slika3.setImageResource(R.drawable.crna_ruta_eng)
        }*/

        }
    override fun onStart() {
        super.onStart()
        recyclerView.layoutManager!!.onRestoreInstanceState(recyclerViewState)
    }

    override fun onStop() {
        super.onStop()
        recyclerViewState = recyclerView.layoutManager!!.onSaveInstanceState()
        cardViewAdapter.notifyDataSetChanged()
    }


    override fun finish() {
        super.finish()
        recyclerViewState = recyclerView.layoutManager!!.onSaveInstanceState()
    }

    private fun adapterOnClick(card: Card) {

    }
    }
