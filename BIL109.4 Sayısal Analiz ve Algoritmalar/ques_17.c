#include <stdio.h>


int main() {
    int sayi;
    
    printf("Bir Sayı Giriniz: ");
    scanf("%d",&sayi);
    
    if(sayi>0)
    {
        printf("Sonuç   :   Pozitif");
    }
    else if(sayi<0)
    {
        printf("Sonuç   :   Negatif");
    }
    else
    {
        printf("Sonuç   :   Nötr");
    }
 
    return 0;
}
