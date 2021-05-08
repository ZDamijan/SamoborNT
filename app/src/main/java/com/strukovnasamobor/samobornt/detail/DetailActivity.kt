 package com.strukovnasamobor.samobornt.detail


import android.os.Bundle

import androidx.viewpager.widget.ViewPager


import com.strukovnasamobor.samobornt.BaseActivity
import com.strukovnasamobor.samobornt.R
import com.strukovnasamobor.samobornt.cardview.Card
import com.strukovnasamobor.samobornt.cardview.CardListHolder

import kotlinx.android.synthetic.main.detail.*


class DetailActivity : BaseActivity() {
    var viewPager: ViewPager? = null
    var swipeAdapter: SwipeAdapter?=null
    lateinit var card: Card
    lateinit var cardListHolder: CardListHolder

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

        // temp
        if (R.drawable.muzej_t_1 !in images && R.drawable.old_town !in images) {
            images.add(1, R.drawable.muzej_t_1)
            images.add(2, R.drawable.old_town)
        }

        tekst.text= card.longDescription
        naslovL.text= card.locationName
        
        viewPager=findViewById<ViewPager>(R.id.viewPager) as ViewPager
        swipeAdapter = SwipeAdapter(this, images.toIntArray())
        viewPager!!.adapter=swipeAdapter
        dotsIndicator.setViewPager(viewPager!!)
        viewPager!!.adapter?.registerDataSetObserver(dotsIndicator.dataSetObserver)
    }
}






