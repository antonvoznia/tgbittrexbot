//
// Created by anton on 8/12/19.
//

#include "user.h"

user::user(std::string name, unsigned long int uid, long long int chid, bool active) {
    this->active = active;
    this->chid = chid;
    this->uid = uid;
    this->name = name;
};
