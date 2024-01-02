//if hali
#include <stdio.h>


int main() {
    
    int sayi1,sayi2,sonuc=0;
    char secim;
    
    printf("1. Sayıyı Giriniz : ");
    scanf("%d",&sayi1);
    printf("2. Sayıyı Giriniz : ");
    scanf("%d",&sayi2);
    printf("İşlem Seçiminiz (+ , - , * , /): ");
    scanf(" %c",&secim);
    
    if(secim == '+')
    {
        sonuc=sayi1+sayi2;
        printf("%d",sonuc);
    }
    else if(secim == '-')
    {
        sonuc=sayi1-sayi2;
        printf("%d",sonuc);
    }
    else if(secim == '*')
    {
        sonuc=sayi1*sayi2;
        printf("%d",sonuc);
    }
    else if(secim == '/')
    {
        sonuc=sayi1/sayi2;
        printf("%d",sonuc);
    }
    else
    {
        printf("Hatalı İşlem Seçtiniz!");
        return 1;
    }
    
    return 0;
}

//switch hali
#include <stdio.h>

int main() {
    int sayi1, sayi2, sonuc = 0;
    char secim;

    printf("1. Sayıyı Giriniz : ");
    scanf("%d", &sayi1);
    printf("2. Sayıyı Giriniz : ");
    scanf("%d", &sayi2);
    printf("İşlem Seçiminiz (+ , - , * , /): ");
    scanf(" %c", &secim);

    switch (secim) {
        case '+':
            sonuc = sayi1 + sayi2;
            printf("%d", sonuc);
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            printf("%d", sonuc);
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            printf("%d", sonuc);
            break;
        case '/':
            if (sayi2 != 0) {
                sonuc = sayi1 / sayi2;
                printf("%d", sonuc);
            } else {
                printf("Sıfıra bölme hatası!");
                return 1;
            }
            break;
        default:
            printf("Hatalı İşlem Seçtiniz!");
            return 1;
    }

    return 0;
}
