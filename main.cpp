#include <iostream>

#include "api_request.h"
#include "bitt_api.h"
#include "telegram_api.h"
#include <nlohmann/json.hpp>

using namespace nlohmann;


int main() {
    std::string res = execute_request(C_BTC_USD_DAY_1);
    std::cout << res << std::endl;
    auto j = json::parse(res);

    //std::cout << std::endl;
    std::cout << j[0]["startsAt"] << std::endl;
    std::cout << send_message(j[0]["startsAt"]) << std::endl;
    return 0;
}