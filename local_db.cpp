//
// Created by anton on 8/9/19.
//

#include "local_db.h"

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    int i;
    for(i = 0; i<argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

int subscribe_user(user u) {
    sqlite3 *db;
    int rc;
    char *zErrMsg = 0;


    rc = sqlite3_open(db_name.c_str(), &db);

    if (rc) {
        write_logs("subscribe_user() cann't open db");
        return rc;
    }
    std::string sql = "INSERT INTO USERS (NAME, UID, CHID, ACTIVE) VALUES ( '" + u.name + "', " + std::to_string(u.uid) + ", "
                      + std::to_string(u.chid) + ", " +std::to_string(u.active) + " );";
    rc = sqlite3_exec(db, sql.c_str(), callback, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        write_logs("subscribe_user()\n" + sql + "\n" + std::string(zErrMsg));
        sqlite3_free(zErrMsg);
        return rc;
    }
    sqlite3_close(db);

    return 0;
}