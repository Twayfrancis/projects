#include <stdio.h>
int main()
{
    int i,j,k;
    int arr[2][3][5]=
    { {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}},
    {{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30}}
    };
  for (i=0; i<2; i++)
  {
    for (j=0; j<3; j++)
    {
        for (k=0; k<5; k++)
        {
            printf("%3d", arr[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
  }
  // printf("the value at arr[%d][%d][%d]: ",&i,&j,&k);
  // printf("Single element of 3D array: %d\n", arr[2][1][2]);
   // printf("Element at arr[%i][%i][%i] = %d\n", i, j, k, arr[i][j][k]);
   printf("Element at position [2][1][2]: %d\n", arr[2][1][2]);
  return (0);
}