#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, digit, firstDigit, lastDigit, product;
    printf ("Enter numbers: ");
    while (scanf("%d", &number))
    {
        int temp = number;
        while (temp != 0)
        {
            digit = temp % 10;
            temp = temp/10;
        }
        firstDigit = digit;
        lastDigit = number%10;
        product = firstDigit*lastDigit;
        if ((number % product == 0) && (product))
            printf ("The number %d is like that\n", number);
        else
            printf ("The number %d is not like that\n", number);
    }
    return 0;
}
