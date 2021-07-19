#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, multiplier=1, lastDigit, newNumber;
    printf ("Enter a number: "); scanf("%d", &number);
    int temp = number;
    while (temp > 10)
    {
        temp = temp/10;
        multiplier = multiplier * 10;
    }
    lastDigit = number % 10;
    newNumber = (lastDigit*multiplier) + (number/10);
    printf ("%d ", newNumber);

    return 0;
}
