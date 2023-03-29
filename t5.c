#include <stdio.h>
 
int main() {
    int A, B, C, D, media;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    media = ((A *B) - (C * D));
    printf("MEDIA = %d\n", media);
    
    return 0;
}
