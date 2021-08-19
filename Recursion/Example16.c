#include <stdio.h>
#include <stdlib.h>

int ProductOfDigits(int number)
{
    if (number < 10)
        return number;
    else
        return (number%10) * ProductOfDigits(number/10);
}

int Prime(int number)
{
    int counter=0;
    for (int i=2; i<=number/2; i++)
    {
        if (number % i == 0)
            counter++;
    }
    if (counter==0)
        return 0;
    else
        return 1;
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    if ((Prime(number))==0)
        printf ("Product of digits in the number %d is %d - Prime",number, ProductOfDigits(number));
    else
        printf ("Product of digits in the number %d is %d - Not Prime", number, ProductOfDigits(number));

    return 0;
}
