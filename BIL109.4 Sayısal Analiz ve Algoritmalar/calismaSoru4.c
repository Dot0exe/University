#include <stdio.h>

void kareAl();

int main() {
    int i;
    printf("Karesini almak istediğiniz sayıyı giriniz: ");
    scanf("%d",&i);
    kareAl(i);
    return 0;
}

void kareAl(int m){
    m = m*m;
    printf("Girdiğiniz sayının karesi: %d",m);
}