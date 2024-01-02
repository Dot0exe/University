#include <stdio.h>


int main() {
    float pi=3.14,alan,cevre;
    int r;
    
    printf("Dairenin Çapını Giriniz : ");
    scanf("%d",&r);
    
    alan=pi*r*r;
    cevre=2*pi*r;
    
    printf("Dairenin Alanı : %.2f",alan);
    printf("\nDairenin Çevresi : %.2f",cevre);

    return 0;
}
