#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, digit, counter=0;
    printf ("Enter numbers: ");
    while (scanf("%d", &number))
    {
        int temp = number;
        while (temp != 0)
        {
            digit = temp % 10;
            temp = temp/10;
        }
        if (digit % 2 == 0)
        {
            counter++;
            printf("Most Significant Digit of number %d is even\n", number);
        }
    }
    printf ("Total numbers like that are: %d", counter
            );
    return 0;
}
