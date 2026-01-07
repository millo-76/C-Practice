/*
This .h file conatins the struct for user creation
*/

#ifndef USER_H
#define USER_H

#include <string>

struct User {
    std::string username;
    std::string passwordHash;
};

#endif