 package com.strukovnasamobor.samobornt.detail


import android.os.Bundle

import androidx.viewpager.widget.ViewPager


import com.strukovnasamobor.samobornt.BaseActivity
import com.strukovnasamobor.samobornt.R
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
        if (bundle?.get("locationName") != null) {
            val name = bundle.get("locationName") as String

            for (i in 0 until cardListHolder.getCardList().size) {
                cardListHolder.getCardList()[i].also { card = it }
                val cardName: String = if (bundle.get("fromMapbox") == true) {
                    '"'+card.locationName+'"'
                } else {
                    card.locationName
                }
                if (cardName == name) {
                    cardFound = true
                    break
                }
            }
        }

        if (cardFound || bundle?.getBoolean("fromCardViewActivity") == true ||
                bundle?.getBoolean("languageChanged") == true) {
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