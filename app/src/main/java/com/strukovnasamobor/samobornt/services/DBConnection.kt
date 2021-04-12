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
        private var singletonDBInstance: DBConnection? = null

        // NOT thread safe!
        // for thread safety: https://en.wikipedia.org/wiki/Double-checked_locking
        fun getConnectionInstance(context: Context): DBConnection {
            if (singletonDBInstance == null) {
                DB_FILE = context.getDatabasePath(DB_NAME).absoluteFile
                singletonDBInstance = DBConnection(context.applicationContext)
                // copy database from assets to device if it doesn't exist or version changed
                if (!DB_FILE.isFile || UPGRADE_DATABASE) {
                    context.assets.open(DB_NAME)
                        .copyTo(FileOutputStream(DB_FILE.toString(), false), 1024)
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

    fun fetchDescription(name: String): String {
        var description: String? = null
        val dbCursor: Cursor =
            DATABASE!!.rawQuery("SELECT Description FROM locations WHERE Name=?", arrayOf(name))
        if (dbCursor.moveToFirst()) {
            dbCursor.use { cursor ->
                description = cursor.getString(cursor.getColumnIndex("Description"))
            }
        }
        return description!!
    }

    fun fetchImageURL(name: String): String {
        var imageURL: String? = null
        val dbCursor: Cursor =
            DATABASE!!.rawQuery("SELECT Image FROM locations WHERE Name=?", arrayOf(name))
        if (dbCursor.moveToFirst()) {
            dbCursor.use { cursor ->
                imageURL = cursor.getString(cursor.getColumnIndex("Image"))
            }
        }
        return imageURL!!
    }
}
