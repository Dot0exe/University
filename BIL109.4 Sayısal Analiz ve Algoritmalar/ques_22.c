#include <stdio.h>


int main() {
    int i=1,toplam=0;
    
    while(i<=500)
    {
        toplam+=i;
        i++;
    }
    printf("%d",toplam);
    return 0;
}
