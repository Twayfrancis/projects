#include <stdio.h>
int main()
{
    int num = 123;
    int *num_ptr = &num;
    int **num_ptr_ptr = &num_ptr;
    printf("value of num: %d\n", num);
    printf("address of num: %p\n", &num);
    printf("value of num-ptr: %p\n", num_ptr);
    printf("value of num-ptr-ptr: %p\n", *num_ptr_ptr);
    printf("address of num-ptr-ptr: %p\n", &num_ptr_ptr);
}