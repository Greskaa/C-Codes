#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, factorial=1;
    printf ("Enter a number: "); scanf("%d", &number);
    for (int i=1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    printf ("%d! = %d", number, factorial);
    return 0;
}
