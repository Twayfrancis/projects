#include <stdio.h>
int main()
{
double salary, bonus;

printf("enter current salary: ");
scanf("%d, &salary");
 if (salary <= 10000) 
 {
    bonus = salary * 0.05;
    } 
    else if (salary <= 20000) 
    {
        bonus = salary * 0.1;
    } 
    else 
    {
        bonus = salary * 0.15;
    }
 printf("The bonus for the employee is: %d\n", bonus);
return (0);
}