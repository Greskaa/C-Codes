#include <stdio.h>
#include <stdlib.h>

int DigitSum(int number)
{
    if (!number)
        return 0;
    else
        return number%10 + DigitSum(number/10);
}

int main()
{
    int n;
    printf ("Enter a number: "); scanf("%d", &n);
    printf ("The sum of digits of %d is: %d", n, DigitSum(n));

    return 0;
}
