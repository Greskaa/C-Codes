#include <stdio.h>
#include <stdlib.h>

int MinimumElement(int n, int a[], int i, int minimum)
{
    if (i == n)
        return minimum;

    if (a[i] < minimum)
        minimum = a[i];

    return MinimumElement(n, a, i+1, minimum);
}

int main()
{
    int n;
    printf ("Enter number of elements in the array: "); scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        printf ("a [ %d ] = ",i);
        scanf("%d", &a[i]);
    }
    printf ("Minimum element in the array is: %d", MinimumElement(n, a, 0, a[0]));

    return 0;
}
