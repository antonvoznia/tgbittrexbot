//
// Created by anton on 8/9/19.
//

#include "local_db.h"
#include "stdio.h"

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    int i;

    for(i = 0; i<argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("___\n");
    return 0;
}

int exec_query(std::string query) {
    sqlite3 *db;
    int rc;
    char *zErrMsg = 0;

    rc = sqlite3_open(db_name.c_str(), &db);

    if (rc) {
        write_logs("exec_query() cann't open db");
        return rc;
    }

    rc = sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        write_logs("exec_query()\n" + query + "\n" + std::string(zErrMsg));
        sqlite3_free(zErrMsg);
        return rc;
    }
    sqlite3_close(db);

    return 0;
}

int subscribe_user(user u) {
    std::string query = "INSERT INTO USERS (NAME, UID, CHID, ACTIVE) VALUES ( '" + u.name + "', " + std::to_string(u.uid) + ", "
                      + std::to_string(u.chid) + ", " +std::to_string(u.active) + " );";

    return exec_query(query);
}

// return UID if it was success
// return -1 in FAIL case
unsigned long int select_user(user u) {
    sqlite3* db;
    sqlite3_stmt* stmt = 0;

    int rc = sqlite3_open(db_name.c_str(), &db);

    if (rc) {
        write_logs("exec_query() cann't open db");
        return rc;
    }

    rc = sqlite3_prepare_v2( db, "SELECT UID FROM USERS WHERE UID = ?;", -1, &stmt, 0 );
    rc = sqlite3_exec( db, "BEGIN TRANSACTION", 0, 0, 0 );

    //bind first parameter
    rc = sqlite3_bind_int64(stmt, 1, u.uid);

    unsigned long int result = 0;

    if (sqlite3_step( stmt ) == SQLITE_ROW) {
        result = sqlite3_column_int(stmt, 0);
    }

    //  Step, Clear and Reset the statement after each bind.
    sqlite3_step( stmt );
    sqlite3_clear_bindings( stmt );
    sqlite3_reset( stmt );
    char *zErrMsg = 0;  //  Can perhaps display the error message if rc != SQLITE_OK.
    sqlite3_exec( db, "END TRANSACTION", 0, 0, &zErrMsg );   //  End the transaction.

    sqlite3_finalize( stmt );

    sqlite3_close(db);

    sqlite3_close(db);
    return result;
}

int update_subscribe(user u, bool active) {
    std::string query = "UPDATE USERS set ACTIVE = " + std::to_string(active) + " WHERE UID = " + std::to_string(u.uid) + ";";

    return exec_query(query);
}

int get_last_update() {
    sqlite3* db;
    sqlite3_stmt* stmt = 0;

    int rc = sqlite3_open(db_name.c_str(), &db);

    if (rc) {
        write_logs("exec_query() cann't open db");
        return rc;
    }

    rc = sqlite3_prepare_v2( db, "SELECT ID FROM LAST_UPDATE;", -1, &stmt, 0 );
    rc = sqlite3_exec( db, "BEGIN TRANSACTION", 0, 0, 0 );

    unsigned long int result = 0;

    if (sqlite3_step( stmt ) == SQLITE_ROW) {
        result = sqlite3_column_int(stmt, 0);
    }

    //  Step, Clear and Reset the statement after each bind.
    sqlite3_step( stmt );
    sqlite3_clear_bindings( stmt );
    sqlite3_reset( stmt );
    char *zErrMsg = 0;  //  Can perhaps display the error message if rc != SQLITE_OK.
    sqlite3_exec( db, "END TRANSACTION", 0, 0, &zErrMsg );   //  End the transaction.

    sqlite3_finalize( stmt );

    sqlite3_close(db);

    sqlite3_close(db);
    return result;
}

int select_active_users(std::queue<unsigned long int>& all_users) {

    sqlite3* db;
    sqlite3_stmt* stmt = 0;

    int rc = sqlite3_open(db_name.c_str(), &db);

    if (rc) {
        write_logs("exec_query() cann't open db");
        return rc;
    }

    rc = sqlite3_prepare_v2( db, "SELECT CHID FROM USERS WHERE ACTIVE = 1;", -1, &stmt, 0 );
    rc = sqlite3_exec( db, "BEGIN TRANSACTION", 0, 0, 0 );

    unsigned long int result = 0;

    while (sqlite3_step( stmt ) == SQLITE_ROW) {
        result = sqlite3_column_int(stmt, 0);
        all_users.push(result);
    }

    //  Step, Clear and Reset the statement after each bind.
    sqlite3_step( stmt );
    sqlite3_clear_bindings( stmt );
    sqlite3_reset( stmt );
    char *zErrMsg = 0;  //  Can perhaps display the error message if rc != SQLITE_OK.
    sqlite3_exec( db, "END TRANSACTION", 0, 0, &zErrMsg );   //  End the transaction.

    sqlite3_finalize( stmt );

    sqlite3_close(db);

    sqlite3_close(db);
    return result;
}

int update_last_update(int new_id, int last_id) {
    std::string query = "UPDATE LAST_UPDATE"
                         " set ID = " + std::to_string(new_id) + " WHERE ID = " + std::to_string(last_id) + ";";

    return exec_query(query);
}