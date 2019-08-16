//
// Created by anton on 8/5/19.
//

#include "telegram_api.h"
#include "logs.h"


int send_message(std::string mess, int chat_id) {
    CURL *curl = curl_easy_init();
    std::string req = TELEGRAM_API + T_SEND_MESSAGE + "?chat_id=" + std::to_string(chat_id) +
            "&text=" + mess;
    curl_easy_setopt(curl, CURLOPT_URL, req.c_str());

    if (getenv("SET_PROXY")) {
        curl_easy_setopt(curl, CURLOPT_PROXY, getenv("SET_PROXY"));
    }

    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_func);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &mess);
    CURLcode res;
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);

    return res;
}

int get_updates(std::string * out) {
    std::string data;
    CURL *curl = curl_easy_init();
    std::string req = TELEGRAM_API + T_GET_UPDATES;
    curl_easy_setopt(curl, CURLOPT_URL, req.c_str());

    if (getenv("SET_PROXY")) {
        curl_easy_setopt(curl, CURLOPT_PROXY, getenv("SET_PROXY"));
    }

    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_func);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &data);
    CURLcode res;
    res = curl_easy_perform(curl);
    if (res == CURLE_COULDNT_CONNECT) {
        write_logs("get_updates() " + C_CONN_PROBLEM);
        return res;
    } else if (res != 0) {
        write_logs("get_updates() " + C_ANY_PROBLEM);
        return res;
    }
    curl_easy_cleanup(curl);
    *out = data;
}