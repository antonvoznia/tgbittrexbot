//
// Created by anton on 8/2/19.
//

#include <curl/curl.h>
#include <string>
#include <iostream>

#include "bitt_api.h"

#ifndef CURRENCY_API_REQUEST_H
#define CURRENCY_API_REQUEST_H

const std::string C_CONN_PROBLEM = "Problem with connection!";
const std::string C_ANY_PROBLEM = "Problem to get data!";

std::size_t write_func(void* ptr, size_t size, size_t nmemb, std::string* s);

std::string get_markets();

std::string execute_request(char*);

#endif //CURRENCY_API_REQUEST_H

