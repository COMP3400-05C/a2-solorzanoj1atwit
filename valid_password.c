#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false
#include <ctype.h>

/**
 * Validates a password based on the following criteria:
 * - Length between 6 and 10 characters (inclusive).
 * - Contains at least 2 uppercase letters.
 * - Contains at least 2 lowercase letters.
 * - Contains only alphanumeric characters (no special characters).
 * Returns true if the password is valid, false otherwise.
 * @param s Pointer to the input password string.
 * @return true if the password is valid, false otherwise.
 */
bool valid_password(const char* s) {
    if (s == NULL) {
        return false;
    }
    int strLen = 0;
    while (s[strLen] != '\0') {
        strLen++;
    }
    int upperCount = 0;
    int lowerCount = 0;
    for (int i = 0; i < strLen; i++) {
        if (!isalnum(s[i])) {
            return false;
        }
        if (isupper(s[i])) {
            upperCount++;
        } else if (islower(s[i])) {
            lowerCount++;
        }
    }
    if (upperCount < 2 || lowerCount < 2) {
        return false;
    } else if (strLen < 6 || strLen > 10) {
        return false;
    }
    return true;
}
