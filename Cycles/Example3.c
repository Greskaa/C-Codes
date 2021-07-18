#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, min;
    printf ("Enter numbers: ");
    scanf("%d", &min);
    int position=1, minPosition;
    while (scanf("%d", &number))
    {
        position++;
        if (number < min)
        {
            min = number;
            minPosition = position;
        }
    }
    printf ("Minimum number is: %d\nPosition of that number is: %d", min, minPosition);

    return 0;
}
