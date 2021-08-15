#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], n;
    printf ("Enter amount of elements: "); scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        printf("a [ %d ] = ", i);
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf ("\n");
    int temp = a[n-1];
    printf ("%d  ", temp);
    for (int i=0; i<n-1; i++)
    {
        printf ("%d  ", a[i]);
    }

    return 0;
}
