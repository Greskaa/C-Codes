#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c='*', x=' ';
    int n, m;
    printf ("Enter rows/columns amount: ");
    scanf("%d", &n);
    for (int i=0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
                printf ("%c", c);
            else
                printf ("%c", x);
        }
        printf ("\n");
    }
    return 0;
}
