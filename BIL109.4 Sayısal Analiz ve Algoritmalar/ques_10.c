//Kendi Yazdığım Kod
#include <stdio.h>
#include <math.h>

int main() {
    int sayi, top = 0, bas, x;

    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);
    x = sayi;

    while (sayi > 0) {
        bas = sayi % 10;
        top += pow(bas, 3);
        sayi = sayi / 10;
    }

    if (x == top) {
        printf("eşit");
    } else {
        printf("eşit değil");
    }

    return 0;
}


//Cevap Kısmındaki Kod
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sayi,top=0,bas,x;
    printf("Bir sayı giriniz: ");
    scanf("%d",&sayi);
    x = sayi;
    dnz:
    bas=sayi%10;
    top=top+bas^3;
    sayi=sayi/10;
    if(sayi<10)
    {
        sayi=sayi/10;
    }
    else
    {
        sayi=sayi/10;
        goto dnz;
    }
    top=top+sayi^3;
    if(x==top)
    {
        printf("eşit");
    }
    else
    {
        printf("eşit değil");
    }
    return 0;
}
