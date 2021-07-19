#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, finish, firstDigit, lastDigit, counter=0;
    printf ("Enter a start value: "); scanf("%d", &start);
    printf ("Enter a finish value: "); scanf("%d", &finish);
    for (start; start<=finish; start++)
    {
        int temp = start;
        while (temp != 0)
        {
            firstDigit = temp % 10;
            temp = temp / 10;
        }
        lastDigit = start % 10;
        if (lastDigit == firstDigit)
        {
            counter++;
            printf ("%d\n", start);
        }
    }
    printf ("Total amount of numbers like that is: %d", counter);
    return 0;
}
