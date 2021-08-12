#include <stdio.h>
#include <stdlib.h>

int Prime (int n)
{
    int counter = 0;
    while (n)
    {
        for (int i = 1; i <= n/2; i++)
        {
            if (n % i == 0)
                counter++;
        }
        if (counter >= 2)
            return 1;
        else
            return 0;
    }
}

int main()
{
    int number;
    printf ("Enter a number: ");
    scanf("%d", &number);
    int prime = Prime(number);
    if (prime == 0)
        printf ("The number %d is Prime", number);
    else
        printf ("The number %d is not Prime", number);

    return 0;
}
