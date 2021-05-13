package com.strukovnasamobor.samobornt.cardview

import androidx.annotation.DrawableRes

data class Card (
    val locationId: String,
    @DrawableRes
    val mainImage: Int,
    val otherImages: MutableList<Int>,
    var locationName: String,
    var shortDescription: String,
    var longDescription: String,
)