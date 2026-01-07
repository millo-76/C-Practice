/*
This file declares the AuthSystem class
*/

#ifndef AUTHSTSTEM_H
#define AUTHSTSTEM_H

#include <string>

class AuthSystem {
public:
    void registerUser();
    bool loginUser();
    void logAttempt(const std::string& user, bool success);
    void viewLogs();
};

#endif