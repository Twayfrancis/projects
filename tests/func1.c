#include <stdio.h>
int areaR(int len, int wid)
{
    int area;
    area = len *wid;
    return area;
}
int main()
{
    int len = 20;
    int wid = 4;
    int area= areaR(20,4);
    printf("Area: %d\n", area);
}