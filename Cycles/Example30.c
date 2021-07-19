#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, finish, flipped, number, counter=0;
    printf ("Enter start value: "); scanf("%d", &start);
    printf ("Enter finish value: "); scanf("%d", &finish);
    for (start; start<=finish; start++)
    {
        number = start;
        flipped = 0;
        while (number != 0)
        {
            flipped = flipped*10 + (number%10);
            number = number / 10;
        }
        if (start == flipped)
        {
            counter++;
            printf("%d - %d\n", start, flipped);
        }
    }
    printf ("Total numbers that are read the same from right-left and from left-right: %d", counter);
    return 0;
}
