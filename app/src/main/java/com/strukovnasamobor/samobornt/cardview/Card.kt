package com.strukovnasamobor.samobornt.cardview

import androidx.annotation.DrawableRes

data class Card (
    @DrawableRes
    val mainImage: Int,
    val otherImages: MutableList<Int>,
    var locationName: String,
    var shortDescription: String,
    var longDescription: String,
)