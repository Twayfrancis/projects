#include <stdio.h>
int fac(int n) //recursive function to calculate factorial
{
	if (n == 0 || n == 1) //base case: factorial of 0 or 1 is 1
	{
		return (1);
	}
	else // recursive case: factorial of n is n * factorial of (n-1)
	{
		return (n * fac(n-1));
	}
}
int main()
{
	int n;
	printf("enter num:");
	scanf("%d", &n);
	if (n < 0) // check for negative input
	{
		printf("error: \n"); 
	}
	else
	{
		int result = fac(n);
		printf("factorial %d is %d\n", n, result);
	}
	return (0);
}	
