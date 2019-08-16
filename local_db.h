//
// Created by anton on 8/9/19.
//

#include <string>
#include <sqlite3.h>

#include "logs.h"
#include "models/user.h"

#ifndef CURRENCY_LOCAL_DB_H
#define CURRENCY_LOCAL_DB_H

const std::string db_name = "local.db";

int exec_query(std::string query);

int subscribe_user(user u);
unsigned long int select_user(user u);
int update_subscribe(user u, bool active);

int get_last_update();
int update_last_update(int new_id, int last_id);

#endif //CURRENCY_LOCAL_DB_H
