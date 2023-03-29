#include <stdio.h>
 
int main() {
    int NUMBER, HOURS;
    float RATE, SALARY;
    scanf("%d %d %f", &NUMBER, &HOURS, &RATE);
    SALARY = HOURS * RATE;
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);
 
    return 0;
}
