#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, finish;
    int lastDigit, firstDigit;
    printf ("Enter start value: "); scanf("%d", &start);
    printf ("Enter finish value: "); scanf("%d", &finish);
    for (start; start<=finish; start++)
    {
        int temp = start;
        lastDigit = temp % 10;
        while (temp > 0)
        {
            firstDigit = temp % 10;
            temp = temp/10;
        }
        if ((firstDigit%2==0) && (lastDigit%2==0))
            printf ("%d\n", start);
    }
    return 0;
}
