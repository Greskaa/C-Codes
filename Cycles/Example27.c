#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, max=-1000, counter=0;
    printf ("Enter numbers: ");
    while (scanf("%d", &number))
    {
        if (number > max)
            max = number;

    }
    return 0;
}
