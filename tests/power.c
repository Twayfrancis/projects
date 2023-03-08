#include <stdio.h>

int _pow_recursion(int x, int y) 
{
    if (y < 0) 
    {
        return (-1); // error: invalid input
    } else if (y == 0) 
    {
        return (1); // base case: any number to the power of 0 is 1
    }
     else 
    {
        return (x * _pow_recursion(x, y - 1)); // recursive case
    }
}
int main() 
{
    int x = 3;
    int y = 5;
    int result = _pow_recursion(x, y);
    printf("%d^%d = %d\n", x, y, result);
    return (0);
}