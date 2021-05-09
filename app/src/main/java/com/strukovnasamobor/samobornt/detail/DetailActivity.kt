 package com.strukovnasamobor.samobornt.detail


import android.os.Bundle

import androidx.viewpager.widget.ViewPager


import com.strukovnasamobor.samobornt.BaseActivity
import com.strukovnasamobor.samobornt.R
import com.strukovnasamobor.samobornt.cardview.Card
import com.strukovnasamobor.samobornt.cardview.CardListHolder

import kotlinx.android.synthetic.main.detail.*


class DetailActivity : BaseActivity() {
    private var viewPager: ViewPager? = null
    private var swipeAdapter: SwipeAdapter?=null
    private lateinit var card: Card
    private lateinit var cardListHolder: CardListHolder

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContentView(R.layout.detail)

        super.initializeMenu()
        val bundle: Bundle? = intent.extras

        cardListHolder = CardListHolder.getCardListHolderInstance(this)

        if (bundle?.get("cardIndex") != null) {
            val cardIndex = bundle.get("cardIndex") as Int
            cardListHolder.getCardList()[cardIndex].also { card = it }
        }

        val images: MutableList<Int> = card.otherImages
        if (card.mainImage !in images) {
            images.add(0, card.mainImage)
        }

        Mtitle.text= card.locationName
        Mtext.text= card.longDescription
        
        viewPager= findViewById(R.id.viewPager)
        swipeAdapter = SwipeAdapter(this, images.toIntArray())
        viewPager!!.adapter=swipeAdapter
        dotsIndicator.setViewPager(viewPager!!)
        viewPager!!.adapter?.registerDataSetObserver(dotsIndicator.dataSetObserver)
    }
}