#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, max, min;
    printf ("Enter numbers: ");
    scanf("%d", &min);
    scanf("%d", &max);
    while (scanf("%d", &number))
    {
        if (number > max)
            max = number;
        if (number < min)
            min = number;
    }
    printf ("Maximum number iS: %d\nMinimum number is: %d", max, min);
    return 0;
}
