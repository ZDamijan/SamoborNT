package com.strukovnasamobor.samobornt.detail

import android.content.Context
import android.content.Intent
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.LinearLayout
import androidx.viewpager.widget.PagerAdapter
import com.strukovnasamobor.samobornt.R


class SwipeAdapter(var context: Context, private var images: IntArray) : PagerAdapter() {
    private var layoutInflater: LayoutInflater = context.getSystemService(Context.LAYOUT_INFLATER_SERVICE) as LayoutInflater

    override fun isViewFromObject(view: View, `object`: Any): Boolean {
       return view ===`object` as LinearLayout
    }

    override fun instantiateItem(container: ViewGroup, position: Int): Any {
        val view = layoutInflater.inflate(R.layout.detail_image, container,false)
        val imageView = view.findViewById<View>(R.id.image) as ImageView
        imageView.setImageResource(images[position])

        imageView.setOnClickListener {
            val intent = Intent(context, FullscreenImageActivity::class.java)
            intent.putExtra("imageResource", images[position])
            context.startActivity(intent)
        }

        container.addView(view)

        return view
    }

    override fun getCount(): Int {
        return images.size
    }

    override fun destroyItem(container: ViewGroup, position: Int, `object`: Any) {
        container.removeView(`object` as LinearLayout)
    }
}