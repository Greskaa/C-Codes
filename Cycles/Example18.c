#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, digit, counter=0;
    printf ("Enter numbers: ");
    scanf("%d", &number);
    while(scanf("%d", &number))
    {
        int temp = number;
        while (temp != 0)
        {
            digit = temp % 10; //at the end of the cycle we will be left with the MSD
            temp = temp/10;
        }
        if (digit % 2 == 0)
        {
            counter++;
            printf ("%d has the MSD even\n", number);
        }
    }
        printf ("Total numbers with even MSD: %d", counter);
    return 0;
}
