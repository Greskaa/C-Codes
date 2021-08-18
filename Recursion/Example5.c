#include <stdio.h>
#include <stdlib.h>

int DigitCount(int number)
{
    static int counter=0;
    if (number==0)
        return counter;
    else
    {
        counter++;
        return DigitCount(number/10);
    }
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    printf ("Number %d has %d digits", number, DigitCount(number));

    return 0;
}
