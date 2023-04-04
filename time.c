#include <stdio.h>
 
int main() {
    int N, h, m;
    scanf("%d", &N);
    h = N/3600;
    N = N - (h*3600);
    m = N/60;
    N = N - (m*60);
    printf("%d:%d:%d\n", h, m, N);
 
    return 0;
}
