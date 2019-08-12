//
// Created by anton on 8/10/19.
//

#include "../logs.h"
#include "../local_db.h"

int main() {
    int rc = 0;
    write_logs("test message...2");
    user u = user("Name3", 1, -123, true);

    rc += subscribe_user(u);


    return rc;
}

