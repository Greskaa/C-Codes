#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf ("Enter a number: ");
    scanf("%d", &n);
    for (int i=1000; i<=9999; i++)
    {
        if (i % n == 0)
            printf ("%d\n", i);
    }
    return 0;
}
