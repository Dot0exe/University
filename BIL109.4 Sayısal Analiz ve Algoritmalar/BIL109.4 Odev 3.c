#include <stdio.h>

int main() {
    int toplam = 0;

    for (int i = 1; i <= 1000; ++i) {
        if (i % 3 == 0 && i % 7 == 0) {
            toplam += i;
        }
    }

    printf("1 ile 1000 arasında 3'e ve 7'ye tam bölünebilen sayıların toplamı: %d", toplam);

    return 0;
}
