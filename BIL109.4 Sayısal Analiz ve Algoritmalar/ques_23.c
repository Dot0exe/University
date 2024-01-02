#include <stdio.h>


int main() {
    int a,b,c;
    printf("1.Sayıyı Giriniz: ");
    scanf("%d",&a);
    printf("2.Sayıyı Giriniz: ");
    scanf("%d",&b);
    
    if(a>50 && b>50)
    {
        c=a+b;
        printf("%d",c);
    }
    else
    {
        printf("Bu Sayılar Uygun Değildir!");
    }
    
    return 0;
}
