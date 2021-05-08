package com.strukovnasamobor.samobornt.services

import android.annotation.SuppressLint
import android.content.Context
import android.database.Cursor
import android.database.sqlite.SQLiteDatabase
import android.database.sqlite.SQLiteOpenHelper
import java.io.File
import java.io.FileOutputStream

private const val DB_NAME: String = "samobornt.db"

// increment version if you change database contents
private const val DB_VERSION: Int = 1
private lateinit var DB_FILE: File
private var DATABASE: SQLiteDatabase? = null
private var UPGRADE_DATABASE: Boolean = false

const val TABLE_NAME_HRV: String = "locations_hrv"
const val TABLE_NAME_ENG: String = "locations_eng"

// column names
const val C_NAME: String = "Name"
const val C_SHORT_DESCRIPTION: String = "Short_description"
const val C_LONG_DESCRIPTION: String = "Long_description"
const val C_MAIN_IMAGE: String = "Main_image"
val C_OTHER_IMAGES: List<String> = listOf("Image2", "Image3", "Image4", "Image5")


class DBConnection private constructor(context: Context) :
    SQLiteOpenHelper(context, DB_NAME, null, DB_VERSION) {
    override fun onCreate(db: SQLiteDatabase) {}

    override fun onUpgrade(db: SQLiteDatabase, oldVersion: Int, newVersion: Int) {
        if (newVersion > oldVersion) {
            UPGRADE_DATABASE = true
        }
    }

    companion object {
        @SuppressLint("StaticFieldLeak")
        @Volatile private var singletonDBInstance: DBConnection? = null

        fun getConnectionInstance(context: Context): DBConnection {
            if (singletonDBInstance == null) {
                DB_FILE = context.getDatabasePath(DB_NAME).absoluteFile
                // copy database from assets to device if it doesn't exist or version changed
                if (!DB_FILE.isFile || UPGRADE_DATABASE) {
                    context.assets.open(DB_NAME)
                            .copyTo(FileOutputStream(DB_FILE.toString(), false), 1024)
                }
                return synchronized(DBConnection::class) {
                    val newInstance = singletonDBInstance ?: DBConnection(context.applicationContext)
                    singletonDBInstance = newInstance
                    singletonDBInstance!!.connectToDatabase()
                    newInstance
                }
            }

            singletonDBInstance!!.connectToDatabase()
            return singletonDBInstance!!
        }
    }

    // should only be used by companion object
    fun connectToDatabase() {
        if (DATABASE == null) {
            DATABASE = super.getReadableDatabase()
        }
    }

    fun getFetchAllCursor(tableName: String): Cursor {
        return DATABASE!!.rawQuery("SELECT * FROM $tableName", null)
    }

    fun getGenericWhereCursor(columnName: String, tableName: String, locationName: String): Cursor {
        return DATABASE!!.rawQuery("SELECT $columnName FROM $tableName WHERE Name='$locationName'", null)
    }
}
