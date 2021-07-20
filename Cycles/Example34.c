#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahrenheit;
    float celsius;
    for (fahrenheit=0; fahrenheit<=300; fahrenheit=fahrenheit+20)
    {
        celsius = (float)5/9 * (fahrenheit - 32);
        printf ("%d -> %.2f\n", fahrenheit, celsius);
    }
    return 0;
}
