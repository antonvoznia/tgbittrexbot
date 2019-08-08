#include <iostream>

#include "api_request.h"
#include "bitt_api.h"
#include "telegram_api.h"
#include <nlohmann/json.hpp>

using namespace nlohmann;

std::string create_summary_mess(std::string btc, std::string eth, std::string ltc);


int main() {
    std::cout << "start" << std::endl;

    if (getenv("SET_PROXY")) {
        std::cout << "Proxy is: " << getenv("SET_PROXY") << std::endl;
    }

    std::string res_btc = execute_request((C_MARKETS + C_BTC_USD.c_str() +"/" + C_SUMMARY).c_str());
    std::string res_eth = execute_request((C_MARKETS + C_ETH_USD.c_str() +"/" + C_SUMMARY).c_str());
    std::string res_ltc = execute_request((C_MARKETS + C_LTC_USD.c_str() +"/" + C_SUMMARY).c_str());
    auto j_btc = json::parse(res_btc);
    auto j_eth = json::parse(res_eth);
    auto j_ltc = json::parse(res_ltc);

    std::string mess = create_summary_mess(j_btc["baseVolume"], j_eth["baseVolume"], j_ltc["baseVolume"]);

    std::cout << mess.c_str() << std::endl;

    std::cout << send_message(mess) << std::endl;
    return 0;
}


std::string create_summary_mess(std::string btc, std::string eth, std::string ltc) {
    std::string mess = "Current prices of Crypto-currencies: %0A%0A";
    mess += "BTC " + btc + " $ %0A";
    mess += "ETH " + eth + " $ %0A";
    mess += "LTC " + ltc + " $ %0A";

    return mess;
}