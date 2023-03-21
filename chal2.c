#include <stdio.h>

int modulus(int *a,int *b, int * result)
{
	*result =  *a % *b;
}
int multiplication(int *a, int *b, int * result)
{
	*result = *a * *b;
}
float division(int *a, int *b, int *result)
{
	*result = ((float)*a / *b);
}
int main()
{
	int a, b, result;
	printf("input any two numbers seprated by comma : ");
	scanf("%d,%d", &a, &b);

	multiplication(&a, &b, &result); // call the multiplication function
	printf("The multiplication of %d*%d = %d\n", a, b, result); // pass addresses of a, b , results // print the mutliplication
	division(&a, &b, &result);
	printf("The division of %d/%d = %d\n", a, b, result);
	modulus(&a, &b, &result);
	printf("MODULUS of %d%%%d =  %d\n", a, b, result);
	return (0);
}
