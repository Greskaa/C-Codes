#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    for (a=-10; a<=10; a++)
    {
        for (b=-10; b<=10; b++)
        {
            for (c=-10; c<=10; c++)
            {
                printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
            }
        }
    }
    return 0;
}
