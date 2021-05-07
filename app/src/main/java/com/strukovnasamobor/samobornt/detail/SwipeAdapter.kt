package com.strukovnasamobor.samobornt.detail

import android.content.Context
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.LinearLayout
import androidx.viewpager.widget.PagerAdapter
import com.strukovnasamobor.samobornt.R

class SwipeAdapter(var context: Context, var images:IntArray):PagerAdapter(){
    lateinit var layoutInflater: LayoutInflater


    override fun isViewFromObject(view: View, `object`: Any): Boolean {
       return view ===`object` as LinearLayout
    }

    override fun instantiateItem(container: ViewGroup, position: Int): Any {
        val view=layoutInflater.inflate(R.layout.detail_slika,container,false)
        val imageView = view.findViewById<View>(R.id.slika) as ImageView
        imageView.setImageResource(images[position])

        container.addView(view)

            return view
    }
    init {
        layoutInflater=context.getSystemService(Context.LAYOUT_INFLATER_SERVICE) as LayoutInflater
    }
    override fun getCount(): Int {
        return images.size
    }
    override fun destroyItem(container: ViewGroup, position: Int, `object`: Any) {
        container.removeView(`object` as LinearLayout)
    }

}