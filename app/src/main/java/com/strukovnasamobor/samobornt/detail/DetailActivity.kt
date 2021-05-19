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

private lateinit var card: Card
private var currentCardIndex: Int? = null
private var currentLocationId: String? = null
const val NUMBER_OF_TABS = 3
const val AR_TAB_INDEX = 1

class DetailActivity : BaseActivity() {
    private var viewPager: ViewPager? = null
    private var swipeAdapter: SwipeAdapter? = null
    private lateinit var cardListHolder: CardListHolder

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.detail)
        super.initializeMenu()

        cardListHolder = CardListHolder.getCardListHolderInstance(this)

        createDetailActivityLayout(intent)
        createTabLayout()
    }

    override fun onNewIntent(intent: Intent?) {
        super.onNewIntent(intent)
        createDetailActivityLayout(intent)
        createTabLayout()
    }

    private fun createDetailActivityLayout(intent: Intent?) {
        val bundle: Bundle? = intent!!.extras
        // user changed language while browsing DetailActivity
        val languageChanged = bundle?.getBoolean("languageChanged")
        val changeToLanguage = bundle?.getString("changeToLanguage")
        // CardViewActivity extras
        val cardIndex = bundle?.getInt("cardIndex")
        val fromCardViewActivity = bundle?.getBoolean("fromCardViewActivity")
        // MapboxActivity extras
        val locationId = bundle?.getString("locationId")
        val fromMapbox = bundle?.getBoolean("fromMapbox")

        if (languageChanged == true && changeToLanguage != null) {
            cardListHolder.changeCardsLanguage(changeToLanguage)
            if (fromCardViewActivity == true) {
                card = cardListHolder.getCardList()[currentCardIndex!!]
            }
        }
        else if (fromCardViewActivity == true) {
            currentCardIndex = cardIndex
            card = cardListHolder.getCardList()[currentCardIndex!!]
        }
        else {
            currentLocationId = locationId
        }

        var cardFound = false
        if (currentLocationId != null && fromCardViewActivity == false && languageChanged == false) {
            for (i in 0 until cardListHolder.getCardList().size) {
                cardListHolder.getCardList()[i].also { card = it }
                val cardId: String = if (fromMapbox == true) {
                    '"'+card.locationId+'"'
                } else {
                    card.locationId
                }
                if (cardId == currentLocationId) {
                    cardFound = true
                    break
                }
            }
        }

        if (cardFound || fromCardViewActivity == true || languageChanged == true) {
            val images: MutableList<Int>? = card.otherImages
            if (!images?.contains(card.mainImage!!)!!) {
                card.mainImage?.let {
                    images.add(0, it)
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
    }

    private fun createTabLayout() {
        var lastSelectedTab = 0
        val btnStartAR: Button = findViewById(R.id.btn_start_ar)
        btnStartAR.visibility = View.GONE
        val tabLayout: TabLayout = findViewById(R.id.tabLayout)

        if(card.arDescription.isNullOrBlank() && tabLayout.touchables.size == NUMBER_OF_TABS){
            tabLayout.getTabAt(AR_TAB_INDEX)!!.view.visibility = View.GONE
        }
        else if (!card.arDescription.isNullOrBlank()) {
            tabLayout.getTabAt(AR_TAB_INDEX)!!.view.visibility = View.VISIBLE
        }

        tabLayout.addOnTabSelectedListener(object : TabLayout.OnTabSelectedListener {
            override fun onTabSelected(tab: TabLayout.Tab) {
                Log.e("tablayout", tab.position.toString())
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
                            intent.putExtra("sceneName", card.locationId)
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