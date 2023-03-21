#include <stdio.h>

int main() {
    int my_array[5] = {1, 2, 3, 4, 5};
    int* my_pointer = my_array; // Assign the pointer to the first element of the array

    printf("Array values using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(my_pointer + i)); // Access array elements using pointer arithmetic
    }

    printf("\nArray values using array notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", my_array[i]); // Access array elements using array notation
    }

    return 0;
}

