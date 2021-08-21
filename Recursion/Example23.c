#include <stdio.h>
#include <stdlib.h>

int countDigits(int number)
{
    if (!number)
        return 0;
    else
        return 1 + countDigits(number/10);
}

int readNumbers(int n)
{
    int number;
    if (!n)
        return 0;
    scanf("%d", &number);
    if (countDigits(number)%2==0)
        printf ("%d - %d\n", number, countDigits(number));
    return readNumbers(n-1);
}

int main()
{
    int n;
    printf ("Enter amount of numbers: "); scanf("%d", &n);
    readNumbers(n);

    return 0;
}
