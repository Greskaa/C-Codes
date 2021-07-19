#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, finish;
    int sumEven, sumOdd;
    printf ("Enter start values: "); scanf("%d", &start);
    printf ("Enter finish values: "); scanf("%d", &finish);
    for (start; start<=finish; start++)
    {
        int temp = start;
        sumEven=0;
        sumOdd=0;
        while (temp != 0)
        {
            if ((temp%10)%2==0)
                sumEven = sumEven + (temp%10);
            else
                sumOdd = sumOdd + (temp%10);
            temp = temp/10;
        }
        if (sumEven == sumOdd)
            printf ("%d\n", start);

    }
    return 0;
}
