package com.strukovnasamobor.samobornt.cardview

import android.content.Intent
import android.os.Bundle
import android.os.Parcelable
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.bottomnavigation.BottomNavigationView
import com.strukovnasamobor.samobornt.BaseActivity
import com.strukovnasamobor.samobornt.MapboxActivity
import com.strukovnasamobor.samobornt.R
import com.strukovnasamobor.samobornt.UnityHolderActivity
import com.strukovnasamobor.samobornt.detail.DetailActivity
import com.strukovnasamobor.samobornt.services.*

private var recyclerViewState: Parcelable? = null
private var cardListLocale: String? = null

class CardViewActivity : BaseActivity() {
    private lateinit var connection: DBConnection
    private lateinit var cardListHolder: CardListHolder
    private lateinit var recyclerView: RecyclerView
    private lateinit var cardViewAdapter: CardViewAdapter

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.card_view)
        super.initializeMenu()
        recyclerView = findViewById(R.id.recycler_view)
        connection = DBConnection.getConnectionInstance(this)
        cardListHolder = CardListHolder.getCardListHolderInstance(this)

        if (cardListLocale == null) {
            cardListLocale = resources.configuration.locales[0].toString()
        }

        if (resources.configuration.locales[0].toString() != cardListLocale) {
            cardListLocale = resources.configuration.locales[0].toString()
            cardListHolder.changeCardsLanguage(cardListLocale!!)
        }
        else if (intent.extras != null && intent.extras!!.getBoolean("languageChanged")) {
            cardListLocale = intent.extras!!.getString("changeToLanguage")
            cardListHolder.changeCardsLanguage(cardListLocale!!)
        }

        cardViewAdapter = CardViewAdapter({ card -> adapterOnClick(card) }, cardListHolder.getCardList())
        recyclerView.adapter = cardViewAdapter
        val bottomNavigationView = findViewById<BottomNavigationView>(R.id.bottom_navigation)
        bottomNavigationView.selectedItemId = R.id.ic_sights
        bottomNavigationView.setOnNavigationItemSelectedListener(BottomNavigationView.OnNavigationItemSelectedListener { menuItem ->
            when (menuItem.itemId) {
                R.id.ic_sights -> {

                    return@OnNavigationItemSelectedListener true
                }
                R.id.ic_map -> {startActivity(Intent(applicationContext, MapboxActivity::class.java))
                overridePendingTransition(0, 0)
                    return@OnNavigationItemSelectedListener true}
                R.id.ic_routes -> {
                    startActivity(Intent(applicationContext, UnityHolderActivity::class.java))
                    overridePendingTransition(0, 0)
                    return@OnNavigationItemSelectedListener true
                }
            }
            false
        })
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
        val intent = Intent(this, DetailActivity::class.java)
        intent.putExtra("cardIndex", cardListHolder.getCardList().indexOf(card))
        intent.putExtra("fromCardViewActivity", true)
        startActivity(intent)
    }
}