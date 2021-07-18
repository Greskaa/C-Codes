#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, finish, digit;
    printf ("Enter start value: "); scanf("%d", &start);
    printf ("Enter finish value: "); scanf("%d", &finish);
    for (start; start <= finish; start++)
    {
        int temp=start;
        int sum=0;
        while (temp!=0)
        {
            digit = temp % 10;
            if (digit%2==0)
            {
                sum = sum + digit;
            }
            temp = temp/10;
        }
        if (sum % 3 == 0 && sum)
            printf ("%d\n", start);
    }
    return 0;
}
