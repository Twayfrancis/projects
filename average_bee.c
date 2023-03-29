#include <stdio.h>

int main() {
    double A, B, average;
    
    // read in the two grades from the user
    scanf("%.1lf %.1lf", &A, &B);
    
    // calculate the weighted average
    average = ((A * 3.5) + (B * 7.5)) / 11.0;
    
    // print the result with one digit after the decimal point
    printf("MEDIA = %.5lf\n", average);
    
    return 0;
}
