#include <stdio.h>
#include <math.h>

int main() {
    float r;
    float pi = 3.14;
    printf("Dairenin yarı çapını girin: ");
    scanf("%f", &r);

    float C = 2 * pi * r;

    float A = pi * r * r;

    printf("Dairenin Çevresi: %.2f\n", C);
    printf("Dairenin Alanı: %.2f\n", A);

    return 0;
}
