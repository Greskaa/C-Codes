#include <stdio.h>
#include <stdlib.h>

int printNumbers(int n)
{
    if (n==1)
        return 1;
    else
    {
        printf ("%d  ", n);
        return printNumbers(n-1);
    }
}

int main()
{
    int number;
    printf ("Enter number: "); scanf("%d", &number);
    printf ("%d  ", printNumbers(number));
    
    return 0;
}
