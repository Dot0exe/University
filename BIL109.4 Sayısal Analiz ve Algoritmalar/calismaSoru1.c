#include <stdio.h>

int tekMiCiftMi(int sayi);

int main() {
    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    // Fonksiyonu çağır ve sonucu yazdır
    if (tekMiCiftMi(sayi)) {
        printf("%d sayisi bir cift sayidir.\n", sayi);
    } else {
        printf("%d sayisi bir tek sayidir.\n", sayi);
    }

    return 0;
}

int tekMiCiftMi(int sayi) {
    if (sayi % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}
