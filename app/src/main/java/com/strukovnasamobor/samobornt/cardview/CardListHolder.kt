package com.strukovnasamobor.samobornt.cardview

import android.annotation.SuppressLint
import android.content.Context
import android.database.Cursor
import android.util.Log
import android.widget.EditText
import android.widget.Toast
import androidx.annotation.DrawableRes
import androidx.appcompat.app.AppCompatActivity
import androidx.core.app.ActivityCompat.recreate
import androidx.recyclerview.widget.RecyclerView
import com.strukovnasamobor.samobornt.R
import com.strukovnasamobor.samobornt.services.*
import kotlinx.android.synthetic.main.card_view.*

class CardListHolder private constructor(private val context: Context) : AppCompatActivity() {
    private val connection: DBConnection = DBConnection.getConnectionInstance(context)
    private var cardsList = createCards()
    private val routesList = createRoutes()

    companion object {
        @SuppressLint("StaticFieldLeak")
        private var HOLDER_INSTANCE: CardListHolder? = null

        fun getCardListHolderInstance(context: Context): CardListHolder {
            return synchronized(CardListHolder::class) {
                val newInstance = HOLDER_INSTANCE ?: CardListHolder(context)
                HOLDER_INSTANCE = newInstance
                newInstance
            }
        }
    }

    fun getCardList(): MutableList<Card> {
        return cardsList
    }

    fun getRouteList(): MutableList<Card> {
        return routesList
    }

    private fun createCards(): MutableList<Card> {
        val cardsListLocale = LocaleHelper.getLanguage(context)
        val correctTable = if (cardsListLocale == "hr" || cardsListLocale == "hr_HR") TABLE_NAME_HRV else TABLE_NAME_ENG
        val cardsList: MutableList<Card> = mutableListOf()

        val cursor: Cursor = connection.getFetchAllCursor(correctTable)
        if (cursor.moveToFirst()) {
            while (!cursor.isAfterLast) {
                val locationId: String = cursor.getString(cursor.getColumnIndex(C_ID))
                val locationName: String = cursor.getString(cursor.getColumnIndex(C_NAME))
                val locationSD: String = cursor.getString(cursor.getColumnIndex(C_SHORT_DESCRIPTION))
                val locationLD: String = cursor.getString(cursor.getColumnIndex(C_LONG_DESCRIPTION))
                val imageName: String = cursor.getString(cursor.getColumnIndex(C_MAIN_IMAGE))
                val arDescription: String? = cursor.getString(cursor.getColumnIndex(C_AR_DESCRIPTION))
                val longitude: String = cursor.getString(cursor.getColumnIndex(C_LONGITUDE))
                val latitude: String = cursor.getString(cursor.getColumnIndex(C_LATITUDE))
                @DrawableRes
                val locationImageID: Int = context.resources
                    .getIdentifier(imageName, "drawable", context.packageName)
                val otherImages = fetchOtherImageNames(locationName)
                val newCard = Card(
                    locationId = locationId,
                    locationName = locationName,
                    longDescription = locationLD,
                    shortDescription = locationSD,
                    mainImage = locationImageID,
                    otherImages = otherImages,
                    arDescription = arDescription,
                    longitude = longitude.toDouble(),
                    latitude = latitude.toDouble()
                )
                cardsList.add(newCard)
                cursor.moveToNext()
            }
        }
        return cardsList
    }

    private fun createRoutes(): MutableList<Card> {
        val cardsListLocale = LocaleHelper.getLanguage(context)
        val routesList: MutableList<Card> = mutableListOf()
        if (cardsListLocale == "en" || cardsListLocale == "en_EN") {

            val locationId1: String = "1"
            val locationName1: String = "Light"
            val locationSD1: String = "Length: 2 km\n" +
                    "Color: blue\n" +
                    "Sights: Prica Gallery, Ferdo Livadić Music School, Homeland Gratitude Park, Church of St. Anastasia, The love story of Stanko Vraz, King Tomislav Square, Samobor cream cake, Samobor Carnival, Samobor Tourist Board, Bermet and Mustarda, Little Venice, Samobor Museum, Ivica Sudnik, Battle of Samobor, Hydropathic swimming pool"
            val locationLD1: String = "0"
            val imageName1: String = "plava_ruta_eng"
            val arDescription1: String? = ""
            val longitude1: String = "0"
            val latitude1: String = "0"

            @DrawableRes
            val locationImageID0: Int = context.resources
                .getIdentifier(imageName1, "drawable", context.packageName)
            val otherImages1 = fetchOtherImageNames(locationName1)
            val newCard1 = Card(
                locationId = locationId1,
                locationName = locationName1,
                longDescription = locationLD1,
                shortDescription = locationSD1,
                mainImage = locationImageID0,
                otherImages = otherImages1,
                arDescription = arDescription1,
                longitude = longitude1.toDouble(),
                latitude = latitude1.toDouble()
            )
            routesList.add(newCard1)
            val locationId2: String = "2"
            val locationName2: String = "Active"
            val locationSD2: String = "Length: 3 km\n" +
                    "Color: red\n" +
                    "Sights: The Old town Samobor, Saint Ana's Chapel, Franciscan Church and Monastery"
            val locationLD2: String = "0"
            val imageName2: String = "crvena_ruta_eng"
            val arDescription2: String? = ""
            val longitude2: String = "0"
            val latitude2: String = "0"

            @DrawableRes
            val locationImageID2: Int = context.resources
                .getIdentifier(imageName2, "drawable", context.packageName)
            val otherImages2 = fetchOtherImageNames(locationName2)
            val newCard2 = Card(
                locationId = locationId2,
                locationName = locationName2,
                longDescription = locationLD2,
                shortDescription = locationSD2,
                mainImage = locationImageID2,
                otherImages = otherImages2,
                arDescription = arDescription2,
                longitude = longitude2.toDouble(),
                latitude = latitude2.toDouble()
            )
            routesList.add(newCard2)
            val locationId3: String = "3"
            val locationName3: String = "Challenger"
            val locationSD3: String = "Length: 1 km\n" +
                    "Color: black\n" +
                    "Sights: Saint Ana's Chapel, Tepec Viewpoint, The Old town Samobor"
            val locationLD3: String = "0"
            val imageName3: String = "crna_ruta_eng"
            val arDescription3: String? = ""
            val longitude3: String = "0"
            val latitude3: String = "0"

            @DrawableRes
            val locationImageID3: Int = context.resources
                .getIdentifier(imageName3, "drawable", context.packageName)
            val otherImages3 = fetchOtherImageNames(locationName3)
            val newCard3 = Card(
                locationId = locationId3,
                locationName = locationName3,
                longDescription = locationLD3,
                shortDescription = locationSD3,
                mainImage = locationImageID3,
                otherImages = otherImages3,
                arDescription = arDescription3,
                longitude = longitude3.toDouble(),
                latitude = latitude3.toDouble()
            )
            routesList.add(newCard3)
        }
        else {
            val locationId1: String = "1"
            val locationName1: String = "Light"
            val locationSD1: String = "Duljina: 2 km\n" +
                    "Boja: plava\n" +
                    "Znamenitosti: Galerija Prica, Glazbena škola Ferdo Livadić, Park domovinske zahvalnosti, Crkva Sv. Anastazije, Ljubavna priča Stanka Vraza, Trg kralja Tomislava, Samoborska kremšnita, Samoborski fašnik, Turistička zajednica grada Samobora, Bermet i muštarda, Mala Venecija, Samoborski muzej, Ivica Sudnik, Bitka kod Samobora, Hidropatsko kupalište"
            val locationLD1: String = "0"
            val imageName1: String = "plava_ruta_hrv"
            val arDescription1: String? = ""
            val longitude1: String = "0"
            val latitude1: String = "0"

            @DrawableRes
            val locationImageID0: Int = context.resources
                .getIdentifier(imageName1, "drawable", context.packageName)
            val otherImages1 = fetchOtherImageNames(locationName1)
            val newCard1 = Card(
                locationId = locationId1,
                locationName = locationName1,
                longDescription = locationLD1,
                shortDescription = locationSD1,
                mainImage = locationImageID0,
                otherImages = otherImages1,
                arDescription = arDescription1,
                longitude = longitude1.toDouble(),
                latitude = latitude1.toDouble()
            )
            routesList.add(newCard1)
            val locationId2: String = "2"
            val locationName2: String = "Active"
            val locationSD2: String = "Duljina: 2 km\n" +
                    "Boja: crvena\n" +
                    "Znamenitosti: Stari Grad Samobor, Kapela Sv. Ane, Franjevačka crkva i samostan"
            val locationLD2: String = "0"
            val imageName2: String = "crvena_ruta_hrv"
            val arDescription2: String? = ""
            val longitude2: String = "0"
            val latitude2: String = "0"

            @DrawableRes
            val locationImageID2: Int = context.resources
                .getIdentifier(imageName2, "drawable", context.packageName)
            val otherImages2 = fetchOtherImageNames(locationName2)
            val newCard2 = Card(
                locationId = locationId2,
                locationName = locationName2,
                longDescription = locationLD2,
                shortDescription = locationSD2,
                mainImage = locationImageID2,
                otherImages = otherImages2,
                arDescription = arDescription2,
                longitude = longitude2.toDouble(),
                latitude = latitude2.toDouble()
            )
            routesList.add(newCard2)
            val locationId3: String = "3"
            val locationName3: String = "Challenger"
            val locationSD3: String = "Duljina: 1 km\n" +
                    "Boja: crna\n" +
                    "Znamenitosti: Kapela Sv. Ane, Vidikovac Tepec"
            val locationLD3: String = "0"
            val imageName3: String = "crna_ruta_hrv"
            val arDescription3: String? = ""
            val longitude3: String = "0"
            val latitude3: String = "0"

            @DrawableRes
            val locationImageID3: Int = context.resources
                .getIdentifier(imageName3, "drawable", context.packageName)
            val otherImages3 = fetchOtherImageNames(locationName3)
            val newCard3 = Card(
                locationId = locationId3,
                locationName = locationName3,
                longDescription = locationLD3,
                shortDescription = locationSD3,
                mainImage = locationImageID3,
                otherImages = otherImages3,
                arDescription = arDescription3,
                longitude = longitude3.toDouble(),
                latitude = latitude3.toDouble()
            )
            routesList.add(newCard3)
        }
        return routesList
    }

    private fun fetchOtherImageNames(locationName: String): MutableList<Int> {
        val imageList: MutableList<Int> = mutableListOf()
        val cardsListLocale = LocaleHelper.getLanguage(context)
        val correctTable = if (cardsListLocale == "hr" || cardsListLocale == "hr_HR") TABLE_NAME_HRV else TABLE_NAME_ENG
        for (otherImageColumn in C_OTHER_IMAGES) {
            val cursor: Cursor = connection
                .getGenericWhereCursor(otherImageColumn, correctTable, locationName)
            if (cursor.moveToFirst()) {
                try {
                    val imageName: String = cursor.getString(cursor.getColumnIndex(otherImageColumn))
                    @DrawableRes
                    val imageID: Int = context.resources
                        .getIdentifier(imageName, "drawable", context.packageName)
                    imageList.add(imageID)
                } catch (e: java.lang.RuntimeException) {} // image doesn't exist
            }
        }
        return imageList
    }

    fun changeCardsLanguage(newLanguage: String) {
        val correctTable: String = if (newLanguage == "hr" || newLanguage == "hr_HR") TABLE_NAME_HRV else TABLE_NAME_ENG
        val cursor: Cursor = connection.getFetchAllCursor(correctTable)
        if (cursor.moveToFirst()) {
            var cardIndex = 0
            while (!cursor.isAfterLast) {
                val currentCard: Card = cardsList[cardIndex]
                currentCard.locationName = cursor.getString(cursor.getColumnIndex(C_NAME))
                currentCard.longDescription = cursor.getString(cursor.getColumnIndex(C_LONG_DESCRIPTION))
                currentCard.shortDescription = cursor.getString(cursor.getColumnIndex(C_SHORT_DESCRIPTION))
                currentCard.arDescription = cursor.getString(cursor.getColumnIndex(C_AR_DESCRIPTION))
                cardIndex += 1
                cursor.moveToNext()
            }
        }
    }

    fun changeRoutesLanguage(newLanguage: String) {
        val Route1:Card = routesList[0]
        val Route2:Card = routesList[1]
        val Route3:Card = routesList[2]

        if (newLanguage == "hr" || newLanguage == "hr_HR")
        {
            Route1.shortDescription = "Duljina: 2 km\n" +
                    "Boja: plava\n" +
                    "Znamenitosti: Galerija Prica, Glazbena škola Ferdo Livadić, Park domovinske zahvalnosti, Crkva Sv. Anastazije, Ljubavna priča Stanka Vraza, Trg kralja Tomislava, Samoborska kremšnita, Samoborski fašnik, Turistička zajednica grada Samobora, Bermet i muštarda, Mala Venecija, Samoborski muzej, Ivica Sudnik, Bitka kod Samobora, Hidropatsko kupalište"
            Route2.shortDescription = "Duljina: 2 km\n" +
                    "Boja: crvena\n" +
                    "Znamenitosti: Stari Grad Samobor, Kapela Sv. Ane, Franjevačka crkva i samostan"
            Route3.shortDescription = "Duljina: 1 km\n" +
                    "Boja: crna\n" +
                    "Znamenitosti: Kapela Sv. Ane, Vidikovac Tepec"
            Route1.mainImage=context.resources
                .getIdentifier("plava_ruta_hrv", "drawable", context.packageName)
            Route2.mainImage=context.resources
                .getIdentifier("crvena_ruta_hrv", "drawable", context.packageName)
            Route3.mainImage=context.resources
                .getIdentifier("crna_ruta_hrv", "drawable", context.packageName)
        }
        else{
            Route1.shortDescription = "Length: 2 km\n" +
                    "Color: blue\n" +
                    "Sights: Prica Gallery, Ferdo Livadić Music School, Homeland Gratitude Park, Church of St. Anastasia, The love story of Stanko Vraz, King Tomislav Square, Samobor cream cake, Samobor Carnival, Samobor Tourist Board, Bermet and Mustarda, Little Venice, Samobor Museum, Ivica Sudnik, Battle of Samobor, Hydropathic swimming pool"
            Route2.shortDescription = "Length: 3 km\n" +
                    "Color: red\n" +
                    "Sights: The Old town Samobor, Saint Ana's Chapel, Franciscan Church and Monastery"
            Route3.shortDescription = "Length: 1 km\n" +
                    "Color: black\n" +
                    "Sights: Saint Ana's Chapel, Tepec Viewpoint, The Old town Samobor"
            Route1.mainImage=context.resources
                .getIdentifier("plava_ruta_eng", "drawable", context.packageName)
            Route2.mainImage=context.resources
                .getIdentifier("crvena_ruta_eng", "drawable", context.packageName)
            Route3.mainImage=context.resources
                .getIdentifier("crna_ruta_eng", "drawable", context.packageName)
        }
    }
}