#include <stddef.h> // For NULL
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * Converts all lowercase letters in the input string to uppercase.
 * Returns a newly allocated string with the capitalized content.
 * If the input string is NULL, returns NULL.
 * @param s Pointer to the input string.
 * @return Pointer to the newly allocated capitalized string, or NULL if input is NULL.
 */
char* capitalize(const char* s) {
    if (s == NULL) {return NULL;}
    size_t len = strlen(s);
    char* retChar = (char*)malloc(len + 1);
    for (size_t i = 0; i < len; i++) {
        if (islower(s[i])) {
            retChar[i] = toupper(s[i]);
        } else {
            retChar[i] = s[i];
        }
    }
    retChar[len] = '\0';
    return retChar;
}

