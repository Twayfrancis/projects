#include <stdio.h>
#include <stdlib.h>

int* create_array(int size) {
    int* array = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }
    return array;
}

int main() {
    int* my_array = create_array(5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", my_array[i]);
    }
    free(my_array);
    return 0;
}

