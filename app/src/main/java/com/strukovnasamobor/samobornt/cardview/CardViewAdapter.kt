package com.strukovnasamobor.samobornt.cardview

import android.view.LayoutInflater
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.strukovnasamobor.samobornt.R

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