#include <stdio.h>
#include <stdlib.h>

int Perfect(int number)
{
    int sum=0;
    for (int i=1; i<=number/2; i++)
    {
        if (number % i == 0)
            sum = sum + i;
    }
    if (sum == number)
        return 1;
    else
        return 0;
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    int perfect = Perfect(number);
    if (perfect)
        printf ("The number %d is Perfect number", number);
    else
        printf ("The number %d is not Perfect", number);
    return 0;
}
