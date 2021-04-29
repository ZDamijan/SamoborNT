package com.strukovnasamobor.samobornt.cardview

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
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
    }

    fun bind(card: Card) {
        currentCard = card
        locationNameTextView.text = currentCard!!.locationName
        shortDescriptionTextView.text = currentCard!!.shortDescription
        currentCard!!.mainImage?.let { cardImageView.setImageResource(it) }
    }
}

class CardViewAdapter(private val onClick: (Card) -> Unit, private val cardsList: MutableList<Card>)
    : RecyclerView.Adapter<CardViewHolder>() {
    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CardViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.card_single, parent, false)
        return CardViewHolder(view, onClick)
    }

    override fun onBindViewHolder(holder: CardViewHolder, position: Int) {
        val card = cardsList[position]
        holder.bind(card)
    }

    override fun getItemCount(): Int {
        return cardsList.size
    }

}