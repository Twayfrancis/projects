#include <stdio.h>
   int main()
{
        int x = 30;
        int *p;
        int **q;
        p = &x;
        q = &p;
  
        printf("value of variable: %d\n", x);
        printf("adress of variable: %p\n",&x);
        printf("value of pointer: %p\n",p);
        printf("address of pointer to pointer: %p\n", q);
}