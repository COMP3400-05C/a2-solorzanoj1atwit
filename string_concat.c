#include <stddef.h> // For NULL
#include <ctype.h>
/**
 * Concatenates the source string (src2) to the destination string (src1) without exceeding the capacity of src1.
 * Ensures that the resulting string in src1 is null-terminated.
 * @param src1 Pointer to the destination string buffer.
 * @param src1_cap Capacity of the destination buffer (including space for null terminator).
 * @param src2 Pointer to the source string to be concatenated.
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if (src1 == NULL || src2 == NULL || src1_cap <= 0) {
        return;
    }
    int i = 0;
    while (i < src1_cap - 1 && src1[i] != '\0') {
        i++;
    }
    int j = 0;
    while (i < src1_cap - 1 && src2[j] != '\0') {
        src1[i] = src2[j];
        i++;
        j++;
    }
    src1[i] = '\0';
}

