//
// Created by anton on 8/10/19.
//

#include <iostream>
#include <queue>

#include "../logs.h"
#include "../local_db.h"

int main() {
    int rc = 0;
    write_logs("test message...2");
    user u = user("Name3", 1, -123, true);

    //rc += subscribe_user(u);
//    u = user("Name1", 14, -123, true);
//    rc = select_user(u);
//    std::cout << "UID = " << rc << std::endl;
//    std::cout << update_subscribe(u, false) << std::endl;
    std::cout << "Last update: " << get_last_update() << std::endl;
    std::cout << "New udpate: " << update_last_update(13, get_last_update()) << std::endl;
    std::queue<unsigned long int> all_users;
    //std::cout << "Select all users: " << select_active_users()_users(all_users) << std::endl;

    while (all_users.size()) {
        std::cout << "User id: " << all_users.front() << std::endl;
        all_users.pop();
    }


    return rc;
}

