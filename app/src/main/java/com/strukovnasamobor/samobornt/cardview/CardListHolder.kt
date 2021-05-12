package com.strukovnasamobor.samobornt.cardview

import android.annotation.SuppressLint
import android.content.Context
import android.database.Cursor
import android.util.Log
import androidx.annotation.DrawableRes
import com.strukovnasamobor.samobornt.services.*

class CardListHolder private constructor(private val context: Context) {
    private val connection: DBConnection = DBConnection.getConnectionInstance(context)
    private val cardsList = createCards()

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

    private fun createCards(): MutableList<Card> {
        val cardsListLocale = context.resources.configuration.locales[0].toString()
        val correctTable = if (cardsListLocale == "hr" || cardsListLocale == "hr_HR") TABLE_NAME_HRV else TABLE_NAME_ENG
        val cardsList: MutableList<Card> = mutableListOf()
        val cursor: Cursor = connection.getFetchAllCursor(correctTable)
        if (cursor.moveToFirst()) {
            while (!cursor.isAfterLast) {
                val locationName: String = cursor.getString(cursor.getColumnIndex(C_NAME))
                val locationSD: String = cursor.getString(cursor.getColumnIndex(C_SHORT_DESCRIPTION))
                val locationLD: String = cursor.getString(cursor.getColumnIndex(C_LONG_DESCRIPTION))
                val imageName: String = cursor.getString(cursor.getColumnIndex(C_MAIN_IMAGE))
                @DrawableRes
                val locationImageID: Int = context.resources
                    .getIdentifier(imageName, "drawable", context.packageName)
                val otherImages = fetchOtherImageNames(locationName)
                val newCard = Card(locationName = locationName,
                    longDescription = locationLD, shortDescription = locationSD,
                    mainImage = locationImageID, otherImages = otherImages)
                cardsList.add(newCard)
                cursor.moveToNext()
            }
        }
        return cardsList
    }

    private fun fetchOtherImageNames(locationName: String): MutableList<Int> {
        val imageList: MutableList<Int> = mutableListOf()
        val cardsListLocale = context.resources.configuration.locales[0].toString()
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
                cardIndex += 1
                cursor.moveToNext()
            }
        }
    }
}