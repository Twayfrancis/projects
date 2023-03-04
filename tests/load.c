#include <stdio.h>

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    // Print a single element from the array
    printf("Element at position [1][2]: %d\n", arr[1][2]);
    
    return 0;
}