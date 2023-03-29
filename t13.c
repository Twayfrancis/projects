#include <stdio.h>

int main() {
    int time, speed;
    scanf("%d %d", &time, &speed);
    double distance = time * speed; // distance in km
    double fuel = distance / 12; // fuel in liters
    printf("%.3lf\n", fuel);
    return 0;
}
