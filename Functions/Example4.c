#include <stdio.h>
#include <stdlib.h>

int Factorial(int n)
{
    int product=1;
    while (n != 0)
    {
        product = product * n;
        n = n - 1;
    }
    return product;
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    int fact = Factorial(number);
    printf("%d! = %d", number, fact);
    return 0;
}
