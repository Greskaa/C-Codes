#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d",&number);
    number++;
    for (number; ;number++)
    {
        if (number>=10 && number<=99)
        {
            if (number % 3 == 0)
                {
                    printf("%d", number);
                    break;
                }
        }
        else if (number>=100 && number<=999)
        {
            if (number % 4 == 0)
                {
                    printf ("%d", number);
                    break;
                }
        }
        else
            printf ("Wrong input");
    }
    return 0;
}
