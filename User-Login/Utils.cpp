/*
Implement utility functions
*/

#include "Utils.h"
#include <ctime>
#include <sstream>

using namespace std;

string hashPassword(const string& password) {
    unsigned long hash = 5381;
    for (char c : password) {
        hash = ((hash << 5) + hash) + c;
    }
    return to_string(hash);
}

string getCurrentTimestamp() {
    time_t now = time(nullptr);
    char buffer[20];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", localtime(&now));
    return buffer;
}