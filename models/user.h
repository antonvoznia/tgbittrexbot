//
// Created by anton on 8/12/19.
//

#include <string>

#ifndef CURRENCY_USER_H
#define CURRENCY_USER_H


class user {

private:
    user();

public:
    std::string name;
    unsigned long int uid;
    unsigned long int chid;
    bool active;

    user(std::string name, unsigned long int uid, unsigned long int chid, bool active);
};


#endif //CURRENCY_USER_H
