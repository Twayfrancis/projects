// create a program with a variable and a pointer and print the address of that variable.
#include <stdio.h>
int main()
{
int tway = 100;
int *ptr = &tway; // declare a pointer to the variable and assign its address
{
    printf("address value: %d\n", *ptr); // print the address of the variables
}
 printf("address of variable: %p\n", ptr); 
return (0);
}