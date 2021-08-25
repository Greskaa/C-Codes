#include <stdio.h>
#include <stdlib.h>

void printArray(int *a, int *b, int n)
{
    for (int i=0; i<n; i++)
    {
        *(b+i) = (*(a+i)) + (*(a+n-1-i));
    }
}
int main()
{
    int n, a[100];
    printf ("Enter number of elements: "); scanf("%d", &n);
    int b[n];
    for (int i=0; i< n; i++)
    {
        printf("a [ %d ] = ",i);
        scanf("%d", &a[i]);
    }
    printArray(&a, &b, n);
    for (int i=0; i<n; i++)
    {
        printf ("%d  ", b[i]);
    }

    return 0;
}
