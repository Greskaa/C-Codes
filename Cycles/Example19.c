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
            temp = temp / 10;
        }
        if (digit == 3)
        {
            counter++;
        }
    }
    printf ("Total amount of numbers with MSD 3 is: %d", counter);
    return 0;
}
