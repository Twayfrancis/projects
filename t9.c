#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a, b, c, major, MaiorAB;
    scanf("%d %d %d", &a, &b, &c);
    MaiorAB = (a+b+abs(a-b))/2;
    major = (MaiorAB+c+abs(MaiorAB-c))/2;
    printf("%d eh o maior", major);
    printf("\n");
    return 0;
}
