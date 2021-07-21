#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, product=1, digit, counter;
    printf ("Enter a number: "); scanf("%d", &number);
    int temp = number;
    while (temp != 0)
    {
        digit = temp % 10;
        product = product * digit;
        temp = temp / 10;
    }
    while (product)
    {
        counter = 0;
        for (int i = 2; i < product; i++)
        {
            if (product % i == 0)
                counter++;
        }
        if (counter == 0)
            printf ("Prime");
        else
            printf ("Not Prime");
        break;
    }

    return 0;
}
