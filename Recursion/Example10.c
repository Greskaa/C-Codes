#include <stdio.h>
#include <stdlib.h>

int MaximumElement(int n, int a[], int i, int maximum)
{
    if (i == n)
        return maximum;

    if (a[i] > maximum)
        maximum = a[i];

    return MaximumElement(n, a, i+1, maximum);
}

int main()
{
    int n, max=-10000;
    printf ("Enter number of elements: "); scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        printf ("a [ %d ] = ",i);
        scanf("%d", &a[i]);
    }
    printf ("Maximum element in the array is: %d", MaximumElement(n, a, 0, max));

    return 0;
}
