#include <stdio.h>


int main() {
    int yıl;
    printf("Yılı Giriniz : ");
    scanf("%d",&yıl);
    
    if(yıl % 4 == 0)
    {
        printf("Artık Yıldır.");
    }
    else
    {
        printf("Artık Yıl Değildir.") ;
    }
    
    return 0;
}
