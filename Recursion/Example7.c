#include <stdio.h>
#include <stdlib.h>

int Prime(int number, int div)
{
    if (number == 1)
        return 1;
    else if (div==1)
        return 0;
    else
    {
        if (number % div == 0)
            return 1;
        else
            return Prime(number, div-1);
    }
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    Prime(number, number/2);

    if (Prime(number,number/2)==0)
        printf ("%d is Prime", number);
    else
        printf ("%d is not Prime", number);

    return 0;
}
