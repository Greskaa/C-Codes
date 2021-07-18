#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    if (number % 2 == 0)
    {
        number++;
        for (number; ; number++)
        {
            if (number % 7 == 0)
            {
                printf ("%d", number);
                break;
            }
        }
    }
    else
    {
        number--;
        for (number; ;--number)
        {
            if (number % 9 == 0)
            {
                printf("%d", number);
                break;
            }
        }
    }
    return 0;
}
