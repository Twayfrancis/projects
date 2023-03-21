#include <stdio.h>
#include <math.h>
int main()
{
int n, num = 0, digits;
printf("Enter number to print in words: "); //ask user to enter the number
scanf("%d", &n); // input number from user
digits = (int) log10(n); // find total digits in n
while (n != 0) // stores reverse of n in num
{
	num = (num * 10) + (n % 10);
	n /= 10;
}
digits = digits - ((int) log10(num));
/* 
 * extraxt last digit of number and print corresponding digit in words
 * till number becomes 0
 */
while (num != 0)
{
	switch(num % 10)
	{
		case 0: 
			printf("zero "); 
			break;
		case 1: 
			printf("one "); 
			break;
		case 2: 
			printf("two "); 
			break;
		case 3: 
			printf("three "); 
			break;
		case 4: 
			printf("four "); 
			break;
		case 5: 
			printf("five "); 
			break;
		case 6: 
			printf("six "); 
			break;
		case 7: 
			printf("seven "); 
			break;
		case 8: 
			printf("eight "); 
			break;
		case 9: 
			printf("nine "); 
			break;
	}
	num = num / 10;
}
while( digits)
{
	printf("zero ");
	digits--;
}
return (0);
}
