#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    for (a=1; a<=15; a++)
    {
        for (b=1; b<=15; b++)
        {
            for (c=1; c<=15; c++)
            {
                printf("%d x %d x %d = %d\n", a, b, c, a*b*c);
            }
        }
    }
    return 0;
}
