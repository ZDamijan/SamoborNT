package com.strukovnasamobor.samobornt.cardview

import androidx.annotation.DrawableRes

data class Card (
    val cardID: Int,
    @DrawableRes
    val mainImage: Int?,
    var locationName: String,
    var shortDescription: String,
    var longDescription: String,
)