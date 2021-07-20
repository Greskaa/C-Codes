#include <stdio.h>
#include <stdlib.h>

int main()
{
    int celsius;
    float fahrenheit;
    for (celsius=-100; celsius<=200; celsius=celsius+20)
    {
        fahrenheit = 32 + (float)9/5 * celsius;
        printf ("%d -> %.2f\n", celsius, fahrenheit);
    }
    return 0;
}
