#include <stddef.h> // For NULL

/**
 * Fills the provided array with consecutive integers starting from 'begin' up to but not including 'end'.
 * Returns the length of the array if successful, or -1 if the input is invalid.
 * Parameters:
 * @param array Pointer to the array to be filled.
 * @param array_len Length of the provided array.
 * @param begin Starting integer (inclusive).
 * @param end Ending integer (exclusive).
 * @return Length of the array if successful, -1 if input is invalid.
 */
int array_fill(int* array, int array_len, int begin, int end) {
    int size = end - begin + 1;
    if (array == NULL || array_len < size || size <= 0) {
        return 0;
    }
    for (int i = 0; i < size; i++) {
        array[i] = begin + i;
    }
    return size;
}