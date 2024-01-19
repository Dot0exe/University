#include <stdio.h>

int main() {
    float celsius,fahrenheit,kelvin;

    printf("Celsius cinsinden sıcaklık giriniz: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    kelvin = celsius + 273.15;


    printf("%.2f Celsius, %.2f Fahrenheit'a eşittir\n", celsius, fahrenheit);
    printf("%.2f Celsius, %.2f Kelvin'e eşittir\n", celsius, kelvin);

    return 0;
}