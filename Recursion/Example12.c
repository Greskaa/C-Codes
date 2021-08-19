#include <stdio.h>
#include <stdlib.h>

int Factorial(int n)
{
    if (n==0)
        return 1;
    else
        return n * Factorial(n-1);
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    printf ("%d! = %d", number, Factorial(number));

    return 0;
}
