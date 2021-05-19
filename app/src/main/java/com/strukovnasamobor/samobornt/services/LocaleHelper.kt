package com.strukovnasamobor.samobornt.services

import android.app.Activity
import android.content.Context
import android.content.SharedPreferences
import android.content.res.Configuration
import java.util.*

class LocaleHelper {
    companion object {
        private const val PREFERRED_LANGUAGE = "PREFERRED_LANGUAGE"
        private const val DEFAULT_APPLICATION_LANGUAGE = "hr"

        @JvmStatic
        fun getLanguage(context: Context): String {
            val packageName: String = context.packageName
            val sharedPreferences: SharedPreferences =
                context.getSharedPreferences("$packageName.PREFERENCES", Activity.MODE_PRIVATE)
            val language: String = sharedPreferences.getString(PREFERRED_LANGUAGE, "") ?: "hr"
            return if (language == "") {
                DEFAULT_APPLICATION_LANGUAGE
            }
            else {
                language
            }
        }

        @JvmStatic
        fun setLanguage(context: Context, language: String= getLanguage(context)) {
            saveLanguage(context, language)
            setLocale(context, language)
        }

        private fun setLocale(context: Context, language: String): Context {
            val locale = Locale(language)
            Locale.setDefault(locale)

            val configuration: Configuration = context.resources.configuration
            configuration.setLocale(locale)

            @Suppress("DEPRECATION")
            context.resources.updateConfiguration(
                configuration,
                context.resources.displayMetrics
            )

            return context
        }

        private fun saveLanguage(context: Context, language: String) {
            val packageName: String = context.packageName
            val sharedPreferences: SharedPreferences =
                context.getSharedPreferences("$packageName.PREFERENCES", Activity.MODE_PRIVATE)
            val preferencesEditor: SharedPreferences.Editor = sharedPreferences.edit()
            preferencesEditor.putString(PREFERRED_LANGUAGE, language)
            preferencesEditor.apply()
        }
    }
}