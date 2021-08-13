#include <stdio.h>
#include <stdlib.h>

int Prime(int number)
{
    int counter;
    for (++number; ;number++)
    {
        counter = 0;
        for (int i=2; i<=number/2; i++)
        {
            if (number % i == 0)
                counter++;
        }
        if (counter == 0)
            break;
    }
    return number;
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    int prime = Prime(number);
    printf ("%d - %d = %d", prime, number, prime-number);

    return 0;
}
