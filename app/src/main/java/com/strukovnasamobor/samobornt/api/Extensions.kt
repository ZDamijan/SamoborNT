package com.strukovnasamobor.samobornt.api

import android.content.Context
import android.content.Intent
import android.content.Intent.FLAG_ACTIVITY_REORDER_TO_FRONT

inline fun <reified T> Context.startActivity() = startActivity(Intent(this, T::class.java))

