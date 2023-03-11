:%s/\s\+$//g#include <stdio.h>
void swap(int *a, int *b) // the swap function takes two integer pointers as arguments a and b.
{
    *a = *a + *b; //  add the values pointed to by a and b, and store the result in *a.
    *b = *a - *b; // subtract the original value of *b from the new value of *a, and store the result in *b.
    *a = *a - *b; //   subtract the original value of *b from the new value of *a, and store the result in *a.
// this results in values of *a and *b being swapped
}
int main()
{
    int fst = 20;
    int snd = 30;
    printf("before swap: fst = %d, snd = %d\n", fst,snd);
    swap(&fst, &snd);
    printf("after swap: fst = %d, snd = %d\n", fst,snd);
    return (0);
}
