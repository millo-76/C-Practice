/*
This file implements the AuthSystem class
*/

/*
IMPLEMENT AuthSystem methods
- File I/O
- User lookup
- Login logic
- Register User
*/

/*
FUNCTION registerUser
    PROMPT "Enter username"
    READ username

    IF username already exists in users
        DISPLAY "Username already exists"
        RETURN
    END IF

    PROMPT "Enter password"
    READ password

    hashedPassword = hashPassword(password)

    CREATE new User with username and hashedPassword
    ADD new User to users list

    APPEND username and hashedPassword to users file

    DISPLAY "Registration successful"
END FUNCTION
*/

/*
FUNCTION loginUser
    PROMPT "Enter username"
    READ username

    PROMPT "Enter password"
    READ password

    hashedInput = hashPassword(password)

    FOR each user in users
        IF user.username == username
            IF user.passwordHash == hashedInput
                CALL logAttempt(username, SUCCESS)
                DISPLAY "Login successful"
                RETURN true
            ELSE
                CALL logAttempt(username, FAILED)
                DISPLAY "Invalid password"
                RETURN false
            END IF
        END IF
    END FOR

    CALL logAttempt(username, FAILED)
    DISPLAY "User not found"
    RETURN false
END FUNCTION
*/

/*
FUNCTION viewLogs
    PROMPT "Enter admin password"
    READ inputPassword

    IF inputPassword is incorrect
        DISPLAY "Access denied"
        RETURN
    END IF

    OPEN log file
    WHILE not end of file
        READ line
        DISPLAY line
    END WHILE

    CLOSE log file
END FUNCTION
*/