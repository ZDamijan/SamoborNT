package com.strukovnasamobor.samobornt.cardview

import android.database.Cursor
import android.os.Bundle
import android.os.Parcelable
import androidx.annotation.DrawableRes
import androidx.recyclerview.widget.RecyclerView
import com.strukovnasamobor.samobornt.BaseActivity
import com.strukovnasamobor.samobornt.R
import com.strukovnasamobor.samobornt.services.*

private var recyclerViewState: Parcelable? = null

class CardViewActivity : BaseActivity() {
    private var connection: DBConnection? = null
    private lateinit var recyclerView: RecyclerView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.card_view)
        super.initializeMenu()
        recyclerView = findViewById(R.id.recycler_view)
        connection = DBConnection.getConnectionInstance(this)
        val cardsList: MutableList<Card> = createCards()
        val cardsViewAdapter = CardViewAdapter({ card -> adapterOnClick(card) }, cardsList)
        recyclerView.adapter = cardsViewAdapter
    }

    override fun onStart() {
        super.onStart()
        recyclerView.layoutManager!!.onRestoreInstanceState(recyclerViewState)
    }

    override fun onStop() {
        super.onStop()
        recyclerViewState = recyclerView.layoutManager!!.onSaveInstanceState()
    }

    private fun createCards(): MutableList<Card> {
        val cardsList: MutableList<Card> = mutableListOf()
        val cursor: Cursor = connection!!.getFetchAllCursor()
        var id = 1
        if (cursor.moveToFirst()) {
            while (!cursor.isAfterLast) {
                val locationName: String = cursor.getString(cursor.getColumnIndex(C_NAME))
                val locationSD: String = cursor.getString(cursor.getColumnIndex(C_SHORT_DESCRIPTION))
                val locationLD: String = cursor.getString(cursor.getColumnIndex(C_LONG_DESCRIPTION))
                val imageName: String = cursor.getString(cursor.getColumnIndex(C_MAIN_IMAGE))
                @DrawableRes
                val locationImageID: Int? = this.resources
                    .getIdentifier(imageName, "drawable", this.packageName)
                val newCard = Card(cardID = id, locationName = locationName,
                        longDescription = locationLD, shortDescription = locationSD,
                        mainImage = locationImageID)
                cardsList.add(newCard)
                cursor.moveToNext()
                id += 1
            }
        }
        return cardsList
    }

    private fun adapterOnClick(card: Card) {
        // TODO: start CardDetailActivity here
        //val intent: Intent = Intent(this, CardDetailActivity::class)
        //intent.putExtra(card.cardID)
        //startActivity(intent)
    }
}