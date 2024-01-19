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

    printf("Eleman tekrar sayıları:\n");
    for (int i = 0; i < n; ++i) {
        if (dizi[i] != -1) {
            int tekrarSayisi = 1;

            for (int j = i + 1; j < n; ++j) {
                if (dizi[j] == dizi[i]) {
                    tekrarSayisi++;

                    dizi[j] = -1;
                }
            }

            printf("%d tekrar sayısı: %d\n", dizi[i], tekrarSayisi);
        }
    }

    return 0;
}
