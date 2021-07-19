#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, sum, product;
    printf ("Enter a number: "); scanf("%d", &number);
    number = number--;
    for (number; number > 0; number--)
    {
        int temp = number;
        sum = 0;
        product = 1;
        if (temp % 2 == 0)
        {
            while (temp != 0)
            {
                if ((temp%10)%2==0)
                    product = product * (temp%10);
                else
                    sum = sum + (temp%10);

                temp = temp/10;
            }
        }
        if ((product) && (sum) && (number%sum==0) && (number%product==0))
            printf ("%d\n", number);
    }
    return 0;
}
