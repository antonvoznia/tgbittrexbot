//
// Created by anton on 8/2/19.
//

#include "api_request.h"

std::size_t write_func(void* ptr, size_t size, size_t nmemb, std::string* s) {
    size_t newLength = size*nmemb;
    try {
        s->append((char*) ptr, newLength);
    } catch (std::bad_alloc &e) {
        std::cerr << "Bad allocation!!! write_func()" << std::endl;
        return 0;
    }
    return newLength;
}

std::string get_markets()  {
    std::string data;
    CURL *curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, C_GET_MARKETS);

    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_func);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &data);
    CURLcode res;
    res = curl_easy_perform(curl);
    if (res == CURLE_COULDNT_CONNECT) {
        return C_CONN_PROBLEM;
    } else if (res != 0) {
        return C_ANY_PROBLEM;
    }
    curl_easy_cleanup(curl);

    return data;
}

std::string execute_request (char* req) {
    std::string data;
    CURL *curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, req);

    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_func);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &data);
    CURLcode res;
    res = curl_easy_perform(curl);
    if (res == CURLE_COULDNT_CONNECT) {
        return C_CONN_PROBLEM;
    } else if (res != 0) {
        return C_ANY_PROBLEM;
    }
    curl_easy_cleanup(curl);

    return data;
}