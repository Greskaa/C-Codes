#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf ("Enter numbers: ");
    while (scanf("%d", &number))
    {
        int temp = number;
        int sum = 0;
        while (temp != 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }
        int counter=0;
        for (int i = 2; i < sum; i++)
        {
            if (sum % i == 0)
                counter++;
        }
        if (counter == 0)
            printf ("Sum of digits of entered number is Prime\n");
        else
            printf ("Sum of digits of entered number is not Prime\n");
    }

    return 0;
}
