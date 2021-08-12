#include <stdio.h>
#include <stdlib.h>

int Power (int n)
{
    int squared = n * n;
    return squared;
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    int result = Power(number);
    printf ("%d^2 = %d", number, result);
    return 0;
}
