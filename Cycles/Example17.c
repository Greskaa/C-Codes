#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, digit, firstDigit, lastDigit, difference;
    printf ("Enter numbers: "); scanf("%d" ,&number);
    while (scanf("%d", &number))
    {
        int temp = number;
        while (temp!=0)
        {
            digit = temp%10;
            temp = temp/10;
        }
        firstDigit = digit;
        lastDigit = number%10;
        difference = (firstDigit - lastDigit);
        if ((number % difference == 0) && (difference))
            printf ("The number %d is like that\n", number);
        else
            printf ("The number %d is not like that\n", number);
    }
    return 0;
}
