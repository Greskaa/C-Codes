#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, finish, counter, product;
    int flag = 1;
    printf ("Enter start value: "); scanf("%d", &start);
    printf ("Enter finish value: "); scanf("%d", &finish);
    for (start; start <= finish; start++)
    {
        int number = start;
        counter=0;
        product = 1;

        if (start >= 1 && start <= 9)
        {
            for (int i = 2; i < number; i++)
            {
                if (number % i == 0)
                    counter++;
            }
        }
        else
        {
            product = (number%10) * ((number%100)/10);
            if (product == 0 || product == 1)
                continue;
            for (int i = 2; i < product; i++)
            {
                if (product % i == 0)
                    counter++;
            }
        }
        if (counter == 0)
            printf ("%d\n",start);
    }

    return 0;
}
