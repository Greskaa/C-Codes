#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, finish, digit;
    int firstDigit, lastDigit;
    
    printf ("Enter start value: "); scanf("%d", &start);
    printf ("Enter finish value: "); scanf("%d", &finish);
    for (start; start <= finish; start++)
    {
        int temp = start;
        int digitCounter=0;
        while (temp != 0)
        {
            digit = temp % 10;
            temp = temp/10;
        }
        firstDigit = digit;
        lastDigit = start % 10;
        if ((firstDigit % 2 == 0) && (firstDigit > lastDigit))
            printf ("%d\n", start);
    }
    return 0;
}
