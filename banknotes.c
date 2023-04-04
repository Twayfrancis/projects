#include <stdio.h>
 
int main() {
    int banknotes, res;

    scanf("%d", &banknotes);

    printf("%d\n", banknotes);
    printf("%d nota(s) de R$ 100,00\n", banknotes/100);
    res = (banknotes%100);
    printf("%d nota(s) de R$ 50,00\n", res/50);
    res = (res%50);

    printf("%d nota(s) de R$ 20,00\n", res/20);
    res = (res%20);

    printf("%d nota(s) de R$ 10,00\n", res/10);
    res = (res%10);

    printf("%d nota(s) de R$ 5,00\n", res/5);
    res = (res%5);

    printf("%d nota(s) de R$ 2,00\n", res/2);
    res = (res%2);

    printf("%d nota(s) de R$ 1,00\n", res/1);

 
    return 0;
}
