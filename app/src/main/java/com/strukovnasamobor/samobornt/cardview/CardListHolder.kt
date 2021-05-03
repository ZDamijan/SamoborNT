package com.strukovnasamobor.samobornt.cardview

import android.annotation.SuppressLint
import android.content.Context
import android.database.Cursor
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
        val correctTable = if (cardsListLocale == "hr") TABLE_NAME_HRV else TABLE_NAME_ENG
        val cardsList: MutableList<Card> = mutableListOf()
        val cursor: Cursor = connection.getFetchAllCursor(correctTable)
        var id = 1
        if (cursor.moveToFirst()) {
            while (!cursor.isAfterLast) {
                val locationName: String = cursor.getString(cursor.getColumnIndex(C_NAME))
                val locationSD: String = cursor.getString(cursor.getColumnIndex(C_SHORT_DESCRIPTION))
                val locationLD: String = cursor.getString(cursor.getColumnIndex(C_LONG_DESCRIPTION))
                val imageName: String = cursor.getString(cursor.getColumnIndex(C_MAIN_IMAGE))
                @DrawableRes
                val locationImageID: Int? = context.resources
                    .getIdentifier(imageName, "drawable", context.packageName)
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

    fun changeCardsLanguage(newLanguage: String) {
        val correctTable: String = if (newLanguage == "hr") TABLE_NAME_HRV else TABLE_NAME_ENG
        val cursor: Cursor = connection.getFetchAllCursor(correctTable)
        if (cursor.moveToFirst()) {
            var cardIndex = 0
            while (!cursor.isAfterLast) {
                val currentCard: Card = cardsList[cardIndex]
                currentCard.locationName = cursor.getString(cursor.getColumnIndex(C_NAME))
                currentCard.longDescription = cursor.getString(cursor.getColumnIndex(C_SHORT_DESCRIPTION))
                currentCard.shortDescription = cursor.getString(cursor.getColumnIndex(C_SHORT_DESCRIPTION))
                cardIndex += 1
                cursor.moveToNext()
            }
        }
    }
}