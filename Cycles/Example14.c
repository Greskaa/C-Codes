#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int number=10; number<=99; number++)
    {
        printf ("%d: ", number);
        for (int j=1; j<=number; j++)
        {
            if (number % j == 0)
                printf ("%d ", j);
        }
        printf ("\n");
    }
    return 0;
}
