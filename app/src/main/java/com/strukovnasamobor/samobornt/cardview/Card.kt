package com.strukovnasamobor.samobornt.cardview

import androidx.annotation.DrawableRes

data class Card (
    val locationId: String,
    @DrawableRes
    var mainImage: Int?,
    val otherImages: MutableList<Int>?,
    var locationName: String?,
    var shortDescription: String?,
    var longDescription: String?,
    var arDescription: String?,
    var longitude: Double?,
    var latitude: Double?
)