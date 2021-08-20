#include <stdio.h>
#include <stdlib.h>

int CheckDigit(int number, int digit)
{
    if (!number)
        return 0;
    if (number%10==digit)
        return 1 + CheckDigit(number/10, digit);

    return CheckDigit(number/10, digit);
}

int main()
{
    int number, n;
    printf ("Enter a number: "); scanf("%d", &number);
    printf ("Enter which number you want to search for: "); scanf("%d", &n);
    printf ("The number %d has the digit %d in it %d times", number, n, CheckDigit(number, n));
    return 0;
}
