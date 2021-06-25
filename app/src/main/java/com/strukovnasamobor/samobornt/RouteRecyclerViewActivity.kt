package com.strukovnasamobor.samobornt

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.LinearLayout
import androidx.recyclerview.widget.LinearLayoutManager
import com.strukovnasamobor.samobornt.routesRecycler.RouteCardAdapter
import kotlinx.android.synthetic.main.route_card_recycler_view.*
import javax.sql.DataSource

class RouteRecyclerViewActivity : AppCompatActivity() {

    private lateinit var routeCardAdapter: RouteCardAdapter

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.route_card_recycler_view)

        initRecyclerView()
        //addDataSet()
    }

    /* Ovdje treba učitati rute iz set-a
    private fun addDataSet(){
        val data = DataSource.createDataSet()
        RouteCardAdapter.submitList(data)
    }
    */

    private fun initRecyclerView(){
        route_card_recycler_view.apply {
            layoutManager = LinearLayoutManager(this@RouteRecyclerViewActivity)
            routeCardAdapter = RouteCardAdapter()
            adapter = routeCardAdapter
        }
    }

}