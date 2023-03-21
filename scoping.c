#include <stdio.h>
int global_var = 5;

int main() 
{
	int local_var = 10;
    printf("%d\n", global_var); // prints 5
    printf("%d\n", local_var);  // prints 10
    return 0;
}
