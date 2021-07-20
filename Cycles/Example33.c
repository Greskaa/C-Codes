#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, max1, max2;
    printf ("Enter numbers: ");
    scanf("%d", &max1);
    scanf("%d", &max2);
    if (max2 > max1)
    {
        int temp = max2;
        max2 = max1;
        max1 = temp;
    }
    while (scanf("%d", &number))
    {
        if (number > max1)
        {
            max2 = max1;
            max1 = number;
        }
        if (number > max2)
            max2 = number;
    }
    printf ("Max1 = %d\nMax2 = %d", max1, max2);

    return 0;
}
