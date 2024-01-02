//Benim Yazdığım kod
#include <stdio.h>


int main() {
    int sayi;
    
    printf("Bir Sayı Giriniz: ");
    scanf("%d",&sayi);
    
    if (sayi % 5 == 0) {
        printf("5'in katıdır.");
    } else {
        printf("5'in katı değildir.");
    }
    return 0;
}

//algoritma kodu
#include <stdio.h>

int main() {
    int sayi;

    printf("Sayı değerini giriniz: ");
    scanf("%d", &sayi);

    while (sayi % 5 == 0) {
        sayi = sayi / 5;
    }

    if (sayi == 1) {
        printf("5'in kuvvetidir.\n");
    } else {
        printf("5'in kuvveti değildir.\n");
    }

    return 0;
}
