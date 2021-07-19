#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, finish, sumEven, sumOdd, counter=0;
    printf ("Enter a start value: "); scanf("%d", &start);
    printf ("Enter a finish value: "); scanf("%d", &finish);
    for (start; start <= finish; start++)
    {
        int temp = start;
        sumEven=0;
        sumOdd=0;
        while (temp != 0)
        {
            if ((temp%10)%2==0)
                sumEven = sumEven + (temp%10);
            if ((temp%10)%2!=0)
                sumOdd = sumOdd + (temp%10);

            temp = temp/10;
        }
        if ((sumOdd > sumEven) && sumEven && sumOdd)
            {
                printf ("%d\n", start);
                counter++;
            }
    }
    printf ("There are %d numbers in the interval", counter);
    return 0;
}
