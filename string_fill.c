#include <stddef.h> // For NULL
#include <ctype.h>

/**
 * Fills the provided string buffer with the specified character up to its capacity minus one,
 * ensuring the last character is a null terminator.
 * @param dest Pointer to the destination string buffer.
 * @param dest_cap Capacity of the destination buffer (including space for null terminator).
 * @param c Character to fill the buffer with.
 */
void string_fill(char dest[], int dest_cap, char c) {
    if (dest == NULL || dest_cap <= 0 || !isprint((unsigned char)c)) {
        return;
    }
    for (int i = 0; i < dest_cap - 1; i++) {
        dest[i] = c;
    }
    dest[dest_cap - 1] = '\0';
}
