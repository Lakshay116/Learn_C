#include <stdio.h>

int main()
{
    float c, f, k; // c and f is celcias and f is fahrenheit respectively.

    printf("Temprature in celcius\n");

scanf:

    scanf("%f", &c);

    f = ((c * (9.0 / 5)) + 32.0);
    printf("The temprature in Fahrenheit is %.2f\n", f);
    k = c + 273.15;
    printf("The temprature in Kelvin is %.2f\n", k);

    goto scanf;

    return 0;
}
