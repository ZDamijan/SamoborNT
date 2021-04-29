package com.strukovnasamobor.samobornt.cardview

import android.content.Intent
import android.database.Cursor
import android.os.Bundle
import androidx.annotation.DrawableRes
import androidx.recyclerview.widget.RecyclerView
import com.strukovnasamobor.samobornt.BaseActivity
import com.strukovnasamobor.samobornt.R
import com.strukovnasamobor.samobornt.services.C_LONG_DESCRIPTION
import com.strukovnasamobor.samobornt.services.C_NAME
import com.strukovnasamobor.samobornt.services.C_SHORT_DESCRIPTION
import com.strukovnasamobor.samobornt.services.DBConnection

class CardViewActivity : BaseActivity() {
    private var connection: DBConnection? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.card_view)
        super.initializeMenu()
        connection = DBConnection.getConnectionInstance(this)
        val cardsList: MutableList<Card> = createCards()
        val cardsViewAdapter = CardViewAdapter({ card -> adapterOnClick(card) }, cardsList)
        val recyclerView: RecyclerView = findViewById(R.id.recycler_view)
        recyclerView.adapter = cardsViewAdapter
    }

    private fun createCards(): MutableList<Card> {
        val cardsList: MutableList<Card> = mutableListOf()
        val imageMappings: HashMap<String, Int> = hashMapOf(
                "Turistička zajednica grada Samobora" to R.drawable.tzgs_t_1,
                "Bermet i muštarda Filipec" to R.drawable.bermet_t_1,
                "Kuća Vrazove Ljubice" to R.drawable.ljubica_t_1,
                "Samoborski muzej" to R.drawable.muzej_t_1,
                "Crkva sv. Anastazije" to R.drawable.anastazija_t_1,
                "Glazbena škola Ferdo Livadić" to R.drawable.livadic_t_1,
                "Parking kod kina" to R.drawable.parking_t_1,
                "Drveni most Mala Venecija" to R.drawable.mvenecija_t_1,
                "Franjevačka crkva i Tabor" to R.drawable.franjevci_t_1,
                "Vungriščak" to R.drawable.vungri_t_1,
                "Galerija Prica" to R.drawable.prica_t_1,
                "Park domovinske zahvalnosti" to R.drawable.pdz_t_1,
                "Trg kralja Tomislava" to R.drawable.trg_t_1,
                "Stari grad" to R.drawable.starigrad_t_1,
                "Kapela sv. Ane" to R.drawable.svana_t_1,
                "Vidikovac" to R.drawable.vidikovac_t_1,
        )
        val cursor: Cursor = connection!!.getFetchAllCursor()
        var id: Int = 1
        if (cursor.moveToFirst()) {
            while (!cursor.isAfterLast) {
                val locationName: String = cursor.getString(cursor.getColumnIndex(C_NAME))
                val locationSD: String = cursor.getString(cursor.getColumnIndex(C_SHORT_DESCRIPTION))
                val locationLD: String = cursor.getString(cursor.getColumnIndex(C_LONG_DESCRIPTION))
                @DrawableRes
                val locationImage: Int? = imageMappings[locationName]
                val newCard: Card = Card(cardID=id, locationName=locationName,
                        longDescription=locationLD, shortDescription=locationSD,
                        mainImage=locationImage)
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