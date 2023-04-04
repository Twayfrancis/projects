#include <stdio.h>

int main()
{
    int days, years, months;

    // Read total number of days from user
    printf("Enter days: ");
    scanf("%d", &days);

    years = (days / 365);   //Ignoring leap year
    //weeks = (days % 365) / 7;
    months = (days % 365) / 30;
    days  = days%365%30;

    printf("YEARS: %d\n", years);
    //printf("WEEKS: %d\n", weeks);
    printf("MONTHS: %d\n", months);
    printf("DAYS: %d \n", days);

    return 0;
}

