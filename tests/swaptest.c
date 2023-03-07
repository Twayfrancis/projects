#include <stdio.h>
int main()
{
    int i=40;
    int j=50;
    int *pnt1=&i;
    int *pnt2=&j;
    {
        printf("\nBefore swap: *pnt1=%d *pnt2=%d", *pnt1, *pnt2);
        *pnt1=*pnt1+*pnt2;
        *pnt2=*pnt1-*pnt2;
        *pnt1=*pnt1-*pnt2;
        printf("\nAfter swap: *pnt1=%d *pnt2=%d",*pnt1,*pnt2);
        return (0);
    }
}