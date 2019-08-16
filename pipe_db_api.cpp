//
// Created by anton on 8/14/19.
//

#include "pipe_db_api.h"

using namespace nlohmann;

void process_update() {
    std::string result;
    get_updates(&result);

    auto j_upd = json::parse(result);
    j_upd = j_upd["result"];

    for (auto el : j_upd) {

        //int update_id = el["update_id"].get<int>();

        std::string text = el["message"]["text"];

        // 1 beacase the el[0] == '/'
        if (text.find("subscribe") == 1) {
            json from = el["message"]["from"];
            long long int chid = el["message"]["chat"]["id"].get<long long int>();
            user new_user(from["username"].get<std::string>(), from["id"].get<unsigned long int>(), chid, true);

            unsigned long int found_user = select_user(new_user);

            //adding new user
            if (found_user == 0) {
                subscribe_user(new_user);
            } else {
                update_subscribe(new_user, true);
            }

            //to do
            //adding the user into DB and send message if it success, if he was added before.
        } else if (true) {
            //add unsubscribe

        }
    }
}

