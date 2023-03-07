#include <stdio.h>
void salaryhike(int *var, int b)
{
    *var = *var+b;
}
int main()
{
    int salary = 0, bonus=0;
    printf("enter current salary:");
    scanf("%d", &salary);
    printf("enter bonus:");
    scanf("%d", &bonus);
    salaryhike(&salary, bonus);
    printf("final salary: %d" , salary);
    return (0);
}