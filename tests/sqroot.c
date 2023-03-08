#include <stdio.h>

int factorial(int n) 
{
    if (n < 0) 
    {
        return (-1); // error: invalid input
    } 
    else if (n == 0) 
    {
        return (1); // base case: factorial of 0 is 1
    } 
    else 
    {
        return (n * factorial(n - 1)); // recursive case
    }
}
int main() 
{
    int n = 5;
    int result = factorial(n);
    printf("%d! = %d\n", n, result);
    return (0);
}