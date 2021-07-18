#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, max;
    printf ("Enter numbers: ");
    scanf("%d", &max);
    int position=1, maxPosition;
    while (scanf("%d", &number))
    {
        position++;
        if (number > max)
        {
            max = number;
            maxPosition = position;
        }
    }
    printf ("Maximum number is: %d\nPosition of maximum number is: %d", max, maxPosition);
    return 0;
}
