package com.strukovnasamobor.samobornt.cardview

import androidx.annotation.DrawableRes

data class Card (
    val cardID: Int,
    @DrawableRes
    val mainImage: Int?,
    val locationName: String,
    val shortDescription: String,
    val longDescription: String,
)