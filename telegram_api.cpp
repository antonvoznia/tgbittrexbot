//
// Created by anton on 8/5/19.
//

#include "telegram_api.h"


int send_message(std::string mess) {
    CURL *curl = curl_easy_init();
    std::string req = TELEGRAM_API + T_SEND_MESSAGE + "?chat_id=" + T_CHAT_ID +
            "&text=" + mess;
    curl_easy_setopt(curl, CURLOPT_URL, req.c_str());

    if (getenv("SET_PROXY")) {
        curl_easy_setopt(curl, CURLOPT_PROXY, getenv("SET_PROXY"));
    }

    //curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_func);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &mess);
    CURLcode res;
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);

    return res;
}