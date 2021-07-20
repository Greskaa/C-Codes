#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, counter=0;
    printf ("Enter x and y: ");
    while (scanf("%d", &x) && scanf("%d", &y))
    {
        if ((x<0) && (y>0))
        {
            printf("(%d,%d)\n",x,y);
            counter++;
        }
    }
    printf ("Total coordinates that lie on Quadrant II is: %d", counter);

    return 0;
}
