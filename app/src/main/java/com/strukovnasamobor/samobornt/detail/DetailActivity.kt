 package com.strukovnasamobor.samobornt.detail


import android.database.Cursor
import android.os.Bundle
import android.security.identity.EphemeralPublicKeyNotFoundException
import android.util.Log

import androidx.viewpager.widget.ViewPager


import com.strukovnasamobor.samobornt.BaseActivity
import com.strukovnasamobor.samobornt.R
import com.strukovnasamobor.samobornt.cardview.Card
import com.strukovnasamobor.samobornt.cardview.CardListHolder
import com.strukovnasamobor.samobornt.cardview.CardViewActivity
import kotlinx.android.synthetic.main.detail.*

private var currentCardIndex: Int? = null

class DetailActivity : BaseActivity() {
    private var viewPager: ViewPager? = null
    private var swipeAdapter: SwipeAdapter? = null
    private lateinit var cardListHolder: CardListHolder

    lateinit var imeLokacije: String
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContentView(R.layout.detail)

        super.initializeMenu()
        val bundle: Bundle? = intent.extras

        cardListHolder = CardListHolder.getCardListHolderInstance(this)

        if (bundle?.get("languageChanged") == true) {
            cardListHolder.changeCardsLanguage(bundle.getString("changeToLanguage")!!)
        }

        if (bundle?.get("cardIndex") != null) {
            currentCardIndex = bundle.get("cardIndex") as Int
        }

        lateinit var card: Card
        var cardFound = false
        if (bundle?.get("locationName") != null) {
            var name = bundle.get("locationName") as String
            Log.e("mapbox cardDetail: ", name)
            var i: Int = 0

            cardListHolder.getCardList()[i].also { card = it }

            while (i < cardListHolder.getCardList().size) {
                val cardName: String = card.locationName
                if ('"'+cardName+'"' == name) {
                    cardFound = true
                    break
                }
                cardListHolder.getCardList()[i].also { card = it }
                i += 1
            }
        }

        if (cardFound || bundle?.getBoolean("fromCardViewActivity") == true) {
            val images: MutableList<Int> = card.otherImages
            if (card.mainImage !in images) {
                images.add(0, card.mainImage)
            }

            Mtitle.text = card.locationName
            Mtext.text = card.longDescription

            viewPager = findViewById(R.id.viewPager)
            swipeAdapter = SwipeAdapter(this, images.toIntArray())
            viewPager!!.adapter = swipeAdapter
            dotsIndicator.setViewPager(viewPager!!)
            viewPager!!.adapter?.registerDataSetObserver(dotsIndicator.dataSetObserver)
        }
    }
}