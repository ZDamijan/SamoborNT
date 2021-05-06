 package com.strukovnasamobor.samobornt.detail


import android.os.Bundle

import androidx.viewpager.widget.ViewPager


import com.strukovnasamobor.samobornt.BaseActivity
import com.strukovnasamobor.samobornt.R

import kotlinx.android.synthetic.main.detail.*


class DetailActivity() : BaseActivity() {
var viewPager: ViewPager? = null

    var swipeAdapter: SwipeAdapter?=null
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContentView(R.layout.detail)

        super.initializeMenu()
        val bundle:Bundle? = intent.extras
        var mainImg = bundle!!.get("MainImg")
        var naslovLokacije = bundle!!.get("title")
        var desc= bundle!!.get("lDes")
        var images = intArrayOf(mainImg as Int,R.drawable.muzej_t_1,R.drawable.old_town)
        tekst.text= desc.toString()
        naslovL.text= naslovLokacije.toString()
        
        viewPager=findViewById<ViewPager>(R.id.viewPager) as ViewPager
        swipeAdapter = SwipeAdapter(this,images)
        viewPager!!.adapter=swipeAdapter
        dotsIndicator.setViewPager(viewPager!!)
        viewPager!!.adapter?.registerDataSetObserver(dotsIndicator.dataSetObserver)



    }



}






