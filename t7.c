#include <stdio.h>

int main() {
    char name[50];
    double salary, sales_total, final_salary;

    // Read input
    scanf("%s %lf %lf", name, &salary, &sales_total);

    // Calculate final salary
    final_salary = salary + (sales_total * 0.15);

    // Print final salary with 2 decimal places
    printf("TOTAL = R$ %.2lf\n", final_salary);

    return 0;
}
