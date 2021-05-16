 package com.strukovnasamobor.samobornt.detail


import android.content.Intent
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.Button

import androidx.viewpager.widget.ViewPager
import com.google.android.material.tabs.TabLayout


import com.strukovnasamobor.samobornt.BaseActivity
import com.strukovnasamobor.samobornt.MapboxActivity
import com.strukovnasamobor.samobornt.R
import com.strukovnasamobor.samobornt.UnityHolderActivity
import com.strukovnasamobor.samobornt.cardview.Card
import com.strukovnasamobor.samobornt.cardview.CardListHolder
import kotlinx.android.synthetic.main.detail.*

lateinit var card: Card
private var currentCardIndex: Int? = null

class DetailActivity : BaseActivity() {
    private var viewPager: ViewPager? = null
    private var swipeAdapter: SwipeAdapter? = null
    private lateinit var cardListHolder: CardListHolder

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContentView(R.layout.detail)

        super.initializeMenu()
        val bundle: Bundle? = intent.extras

        cardListHolder = CardListHolder.getCardListHolderInstance(this)

        if (bundle?.get("languageChanged") == true) {
            cardListHolder.changeCardsLanguage(bundle.getString("changeToLanguage")!!)
            card = cardListHolder.getCardList()[currentCardIndex!!]
        }

        if (bundle?.get("cardIndex") != null) {
            currentCardIndex = bundle.get("cardIndex") as Int
            card = cardListHolder.getCardList()[currentCardIndex!!]
        }

        var cardFound = false
        if (bundle?.get("locationId") != null) {
            val name = bundle.get("locationId") as String

            for (i in 0 until cardListHolder.getCardList().size) {
                cardListHolder.getCardList()[i].also { card = it }
                val cardId: String = if (bundle.get("fromMapbox") == true) {
                    '"'+card.locationId+'"'
                } else {
                    card.locationId
                }
                if (cardId == name) {
                    cardFound = true
                    break
                }
            }
        }

        if (cardFound || bundle?.getBoolean("fromCardViewActivity") == true ||
                bundle?.getBoolean("languageChanged") == true) {
            val images: MutableList<Int>? = card.otherImages
            if (!images?.contains(card.mainImage!!)!!) {
                card.mainImage?.let {
                    images?.add(0, it)
                }
            }

            cardTitle.text = card.locationName
            cardText.text = card.longDescription

            viewPager = findViewById(R.id.viewPager)
            swipeAdapter = SwipeAdapter(this, images.toIntArray())
            viewPager!!.adapter = swipeAdapter
            dotsIndicator.setViewPager(viewPager!!)
            viewPager!!.adapter?.registerDataSetObserver(dotsIndicator.dataSetObserver)
        }

        var lastSelectedTab = 0
        var btnStartAR: Button = findViewById(R.id.btn_start_ar)
        btnStartAR.visibility = View.GONE
        var tabLayout: TabLayout = findViewById(R.id.tabLayout)
        if(card.arDescription.isNullOrBlank()){
            tabLayout.touchables[1].visibility = View.GONE
        }
        tabLayout.addOnTabSelectedListener(object : TabLayout.OnTabSelectedListener {
            override fun onTabSelected(tab: TabLayout.Tab) {
                Log.e("tablayout", tab.position.toString());
                when (tab.position) {
                    0 -> {
                        cardText.text = card.longDescription
                        lastSelectedTab = 0
                    }
                    1 -> {
                        cardText.text = card.arDescription
                        lastSelectedTab = 1
                        btnStartAR.setOnClickListener{
                            val intent = Intent(this@DetailActivity, UnityHolderActivity::class.java)
                            intent.putExtra("sceneName", "LauncherScreen")
                            startActivity(intent)
                        }
                        btnStartAR.visibility = View.VISIBLE
                    }
                    2 -> {
                        val intent = Intent(this@DetailActivity, MapboxActivity::class.java)
                        intent.putExtra("latitude", card.latitude)
                        intent.putExtra("longitude", card.longitude)
                        startActivity(intent)
                        tabLayout.getTabAt(lastSelectedTab)?.select()
                    }
                }
            }
            override fun onTabUnselected(tab: TabLayout.Tab) {
                if(tab.position == 1){
                    btnStartAR.visibility = View.GONE
                }
            }
            override fun onTabReselected(tab: TabLayout.Tab) {}
        })
    }
}