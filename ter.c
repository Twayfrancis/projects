#include <stdio.h>
 
int main()
{   int n = 10;
   int *pointer_to_n = &n;
   /* your code goes here */
   /* testing code */
 
  printf("before, n is %d\n", n);
 
   (*pointer_to_n)++;
 
   printf("after, n is now %d\n",n);
 
   if (pointer_to_n != &n) return 1;
   if (*pointer_to_n != 11) return 1;
 
  printf("Done!\n");
  return 0;
}
