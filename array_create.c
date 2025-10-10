#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc
#include "array_fill.c"

int array_fill(int* array, int array_len, int begin, int end);

/**
 * Creates an array of even integers within the specified range [begin, end].
 * Returns a pointer to the newly created array, or NULL if no even numbers exist in the range or if the input is invalid.
 * @param begin Starting integer (inclusive).
 * @param end Ending integer (inclusive).
 * @return Pointer to the newly created array of even integers, or NULL if no even numbers exist in the range or if the input is invalid.
 */
int* array_create_evens(int begin, int end) {

    int size = end - begin;
    if (size <= 0) {
        return NULL;
    }

    int* array = (int*)malloc(size * sizeof(int));
    int temp_size = end - begin + 1;
    int* temp = (int*)malloc(temp_size * sizeof(int));

    array_fill(temp, temp_size, begin, end);

    int index = 0;
    for (int i = 0; i < temp_size; i++) {
        if (temp[i] % 2 == 0) {
            array[index++] = temp[i];
        }
    }
    return array;
}
