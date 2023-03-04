#include <stdio.h>
int main()
{
    int arr[2][3][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30}; // declare 3d array with dimensions 3x5x2
    //int count = 1; // initialize a counter variable to 1
    int t;
    int z;
    int l;
    // introduce loop through array and fill it with seq numbers
    for(t=0; t<2; t++)
    {
        for (z=0; z<3; z++)
        {
            for (l<0; l<5; l++)
        {
       // arr[t][z][l] = count++; //assign next number to current element
    }
}
}
// loop through array again and print elements
for (t=0; t<2; t++)
{
    for (z=0; z<3; z++)
    {
        for (l=0; l<5; l++)
        {
            printf("%3d", arr[t][z][l]);
        }
        printf("\n"); // print newline character after each row
    }
    printf("\n"); // print extra line after every 2d layer
} 
printf("Single element of 3D [0][1][2]: %d\n", arr[0][1][2]);
return (0);
}
