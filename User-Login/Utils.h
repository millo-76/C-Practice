/*
Declare utility functions
*/

#ifndef UTILS_H
#define UTILS_H

#include <string>

// Hashing
std::string hashPassword(const std::string& password);

// Time utilities
std::string getCurrentTimestamp();

#endif