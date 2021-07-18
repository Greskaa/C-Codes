#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, finish;
    printf ("Enter start value: "); scanf("%d", &start);
    printf ("Enter finish value: "); scanf("%d", &finish);
    for (start; start<=finish; start++)
    {
        int temp = start;
        int sum=0;
        while (temp != 0)
        {
            if ((temp%10)%2 != 0)
                sum = sum + (temp%10);

            temp = temp/10;
        }
        if (sum % 2 != 0)
            printf ("%d %d\n", start, sum);
    }
    return 0;
}
