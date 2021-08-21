#include <stdio.h>
#include <stdlib.h>

int digitCounter(int number)
{
    if (!number)
        return 0;
    else
        return (number%10) + digitCounter(number/100);
}
int main()
{
    int number;
    printf ("Enter number: "); scanf("%d", &number);
    printf ("Sum of odd positions of digits in the number %d is: %d", number, digitCounter(number));

    return 0;
}
