package com.strukovnasamobor.samobornt.cardview

import android.view.View
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.strukovnasamobor.samobornt.R

class CardViewHolder(itemView: View, val onClick: (Card) -> Unit) : RecyclerView.ViewHolder(itemView) {
    private val locationNameTextView: TextView = itemView.findViewById(R.id.Location_name)
    private val shortDescriptionTextView: TextView = itemView.findViewById(R.id.Short_description)
    private val cardImageView: ImageView = itemView.findViewById(R.id.Main_image)
    private var currentCard: Card? = null

    init {
        itemView.setOnClickListener {
            currentCard?.let {
                onClick(it)
            }
        }
        cardImageView.setOnClickListener {
            currentCard?.let {
                onClick(it)
             }
        }
    }

    fun bind(card: Card) {
        currentCard = card
        locationNameTextView.text = currentCard!!.locationName
        shortDescriptionTextView.text = currentCard!!.shortDescription
        currentCard!!.mainImage?.let { cardImageView.setImageResource(it) }
    }
}