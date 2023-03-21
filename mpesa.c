#include <stdio.h>
int main()
{
int mpesabalance;
printf("Enter mpesa balance: ");
scanf("%d", &mpesabalance);
if (mpesabalance > 1000)
{
	printf("Enda Dubai");
}
else
if (mpesabalance > 500)
{
	printf("Go to KFC");
}
else
if (mpesabalance > 200)
{
	printf("Go to Sakati");
}
else
if (mpesabalance >= 200)
{
	printf("Inama ipite");
}
else 
if (mpesabalance <= 50)
{
	printf("Lala njaa kijana");
}
return (0);
}
