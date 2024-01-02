#include <stdio.h>

int main()
{
    int i,k,j,l;
    
    printf("1. Sayıyı Giriniz.\n");
    scanf("%d",&i);
    printf("2. Sayıyı Giriniz.\n");
    scanf("%d",&k);
    printf("Yapmak istediğiniz işlemi seçiniz.\n1. Toplama\n2. Çıkarma\n3. Çarpma\n4. Bölme\nSeçtiğiniz İşlem: ");
    scanf("%d",&j);
    if(j==1)
    {
        l = i+k;
        printf("Sonuç:%d",l);
    }
    else if (j==2)
    {
        l = i-k;
        printf("Sonuç:%d",l);
    }
    else if(j==3)
    {
        l = i*k;
        printf("Sonuç:%d",l);
    }
    else if(j==4)
    {
        l = i/k;
        printf("Sonuç:%d",l);
    }
    else
    {
        printf("Lütfen Geçerli Bir İşlem Seciniz.");
        return 1;
    }
    return 0;
}