//
// Created by anton on 8/5/19.
//

#include <string>
#include <curl/curl.h>
#include "api_request.h"

#ifndef CURRENCY_TELEGRAM_API_H
#define CURRENCY_TELEGRAM_API_H

#endif //CURRENCY_TELEGRAM_API_H

const std::string TELEGRAM_API = "https://api.telegram.org/bot<>/";

const std::string T_CHAT_ID = "136393520";

const std::string T_SEND_MESSAGE = "sendMessage";

int send_message(std::string mess);
