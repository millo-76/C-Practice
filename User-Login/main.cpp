/*
This program is designed to record and log user account creation and record login attempts.

This main file contains:
- Program entry point
- Menu loop
- Calls AuthSystem methods
*/

#include <iostream>
#include <string>
#include "AuthSystem.h"
#include "AuthSystem.cpp"
#include "Utils.h"
#include "Utils.cpp"
#include "User.h"


int main() {
    AuthSystem auth;
    int choice;

    while (true) {
        std::cout << "1. Register\n";
        std::cout << "2. Login\n";
        std::cout << "3. View Logs\n";
        std::cout << "4. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        if (choice == 1) {
            auth.registerUser();
        }
        else if (choice == 2) {
            auth.loginUser();
        }
        else if (choice == 3) {
            auth.viewLogs();
        }
        else if (choice == 4) {
            std::cout << "Goodbye\n";
            break;   // clean exit
        }
        else {
            std::cout << "Invalid option\n";
        }
    }

    return 0;
}

//LOAD users from file

/*
FUNCTION loadUsers
    IF users file exists
        OPEN users file
        WHILE not end of file
            READ line
            PARSE username and passwordHash
            CREATE User object
            ADD to users list
        END WHILE
        CLOSE file
    END IF
END FUNCTION
*/

/*
FUNCTION exitProgram
    DISPLAY "Goodbye"
    TERMINATE program
END FUNCTION
*/