//
// Created by anton on 8/14/19.
//

#include <nlohmann/json.hpp>

#include "telegram_api.h"
#include "local_db.h"

#ifndef CURRENCY_PIPE_DB_API_H
#define CURRENCY_PIPE_DB_API_H

const std::string SUBSCRIBE = "subscribe";

void process_update();

#endif //CURRENCY_PIPE_DB_API_H
