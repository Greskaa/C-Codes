#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int start, finish, flipped, digitCounter;
    int number, temp, sum;
    printf ("Enter start value: "); scanf("%d", &start);
    printf ("Enter finish value: "); scanf("%d", &finish);
    for (start; start<=finish; start++)
    {
        temp = number = start;
        flipped = 0;
        digitCounter=0;
        sum = 0;
        while (temp != 0)
        {
            flipped = flipped*10 + (temp%10);
            digitCounter++;
            temp = temp / 10;
        }
        while (number != 0)
        {
            sum = sum + (pow((number%10),digitCounter));
            number = number / 10;
        }
        if (flipped == sum)
            printf ("%d -> %d = %d\n", start, flipped, sum);
    }
    return 0;
}       
