#include <stdio.h>
#include <stdlib.h>

void printArray(int *a, int n)
{
    for (int i=0; i<n ;i++)
        printf ("%d  ", *(a+i));
}
int main()
{
    int n;
    printf ("Enter number of elements: "); scanf("%d", &n);
    int a[n];
    for (int i=0; i<n ;i++)
        scanf("%d", &a[i]);

    printArray(&a, n);

    return 0;
}
