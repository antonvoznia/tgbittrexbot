#include <iostream>

#include <nlohmann/json.hpp>
#include <unistd.h>

#include "api_request.h"
#include "bitt_api.h"
#include "pipe_db_api.h"

using namespace nlohmann;

const unsigned int PERIOD = 7;

std::string create_summary_mess(std::string btc, std::string eth, std::string ltc);


int main() {
//    std::cout << "start" << std::endl;
//
//    if (getenv("SET_PROXY")) {
//        std::cout << "Proxy is: " << getenv("SET_PROXY") << std::endl;
//    }
//
//    std::string res_btc = execute_request((C_MARKETS + C_BTC_USD.c_str() +"/" + C_SUMMARY).c_str());
//    std::string res_eth = execute_request((C_MARKETS + C_ETH_USD.c_str() +"/" + C_SUMMARY).c_str());
//    std::string res_ltc = execute_request((C_MARKETS + C_LTC_USD.c_str() +"/" + C_SUMMARY).c_str());
//    auto j_btc = json::parse(res_btc);
//    auto j_eth = json::parse(res_eth);
//    auto j_ltc = json::parse(res_ltc);
//
//    std::string mess = create_summary_mess(j_btc["baseVolume"], j_eth["baseVolume"], j_ltc["baseVolume"]);
//
//    std::cout << mess.c_str() << std::endl;
//
//    std::cout << send_message(mess) << std::endl;

    unsigned int curr = 0;
    while (1) {
        process_update();
        usleep(2000);

        if (curr % PERIOD == 0) {
            std::string res_btc = execute_request((C_MARKETS + C_BTC_USD.c_str() +"/" + C_SUMMARY).c_str());
            std::string res_eth = execute_request((C_MARKETS + C_ETH_USD.c_str() +"/" + C_SUMMARY).c_str());
            std::string res_ltc = execute_request((C_MARKETS + C_LTC_USD.c_str() +"/" + C_SUMMARY).c_str());

            auto j_btc = json::parse(res_btc);
            auto j_eth = json::parse(res_eth);
            auto j_ltc = json::parse(res_ltc);

            std::string mess = create_summary_mess(j_btc["high"], j_eth["high"], j_ltc["high"]);

            std::queue<unsigned long int> all_users;
            select_active_users(all_users);

            while (all_users.size()) {
                int res = send_message(mess, all_users.front());
                all_users.pop();
                if (res != 0) {
                    write_logs("Send message problem: " + std::to_string(res));
                }
            }
        }
        ++curr;
    }
    return 0;
}


std::string create_summary_mess(std::string btc, std::string eth, std::string ltc) {
    // %0A - new line in http(s) requests
    std::string f_btc = btc.substr(0, btc.find("."));
    std::string f_eth = eth.substr(0, eth.find("."));
    std::string f_ltc = ltc.substr(0, ltc.find("."));
    std::string mess = "Current prices of Crypto-currencies: %0A%0A";
    mess += "BTC " + f_btc + " $ %0A";
    mess += "ETH " + f_eth + " $ %0A";
    mess += "LTC " + f_ltc + " $ %0A";

    return mess;
}
