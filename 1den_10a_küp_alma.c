#include<stdio.h>

int main() {
    int i, k = 0;

    for (i = 1; i <= 10; i++) {
        k += i * i * i;
    }

    printf("1'den 10'a kadar olan sayıların küplerinin toplamı: %d\n", k);

    return 0;
}
