#include<stdio.h>

int main() {
    int i,k = 1;
    printf("Faktöriyelini Hesaplamak İstediğiniz Sayıyı Giriniz: ");
    if (scanf("%d", &i) != 1) {
        printf("Hatali giris! Lutfen gecerli bir sayi girin.");
        return 1;
    }
    for(i ; i > 1;i--)
    {
        k = k*i;
    }
    printf("%d",k);
    return 0;
}
