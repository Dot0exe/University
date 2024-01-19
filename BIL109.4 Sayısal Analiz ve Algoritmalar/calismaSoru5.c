#include <stdio.h>

int main() {
    int n;
    printf("Dizi boyutunu girin: ");
    scanf("%d", &n);

    int dizi[n];

    printf("Dizi elemanlarını girin:\n");
    for (int i = 0; i < n; ++i) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    int toplam = 0;
    for (int i = 0; i < n; ++i) {
        toplam += dizi[i];
    }

    printf("Dizi elemanlarının toplamı: %d\n", toplam);

    return 0;
}
