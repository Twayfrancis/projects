#include <stdio.h>
int main()
{
int arr[3][6] = {
{1, 2, 3, 4, 5, 6},
{7, 8, 9, 10, 11, 12},
{13, 14, 15, 16, 17, 18}
};
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 6; j++)
{
printf("%2d \n", arr[i][j]);
}
printf("Element at position [1][2]: %d\n", arr[1][2]);
return 0;
}
}
