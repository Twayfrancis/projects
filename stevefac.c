#include <stdio.h>
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
       return (n = n * fact(n-1));
    }
}
int main()
{
    int a;
    printf("Enter a number,i give its factorial :\t");
    scanf("%d", &a);

    fact(a);
    printf("The factorial is :\t%d\n", fact(a));
    return 0;
}
