package com.strukovnasamobor.samobornt.routesRecycler

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.strukovnasamobor.samobornt.R
import kotlinx.android.synthetic.main.route_card.view.*

class RouteCardAdapter : RecyclerView.Adapter<RecyclerView.ViewHolder>() {

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): RecyclerView.ViewHolder {
        return RouteCardHolder(
            LayoutInflater.from(parent.context).inflate(R.layout.route_card, parent, false)
        )
    }

    override fun onBindViewHolder(holder: RecyclerView.ViewHolder, position: Int) {
        when(holder){
            is RouteCardHolder ->{
                holder.bind(items.get(position))
            }
        }
    }

    override fun getItemCount(): Int {
        return items.size
    }

    fun submitList(routeList: List<RouteCard>){
        items = routeList
    }

    private var items: List<RouteCard> = ArrayList()

    class RouteCardHolder constructor(
        itemView: View
    ): RecyclerView.ViewHolder(itemView){
        val route_image = itemView.route_card_image
        val route_title = itemView.route_card_title
        val route_description = itemView.route_card_description

        fun bind(routeCard: RouteCard){
            route_title.setText(routeCard.title)
            route_description.setText(routeCard.description)
            //postaviti image route karte:
            //route_image.set
        }

    }

}