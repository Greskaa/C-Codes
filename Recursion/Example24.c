#include <stdio.h>
#include <stdlib.h>

int Maximum(int n, int a[], int i, int max)
{
    if (i==n)
        return max;
    if (a[i]>max)
        max = a[i];

    return Maximum(n, a, i+1, max);
}
int Minimum(int n, int a[], int i, int min)
{
    if (i==n)
        return min;
    if (a[i]<min)
        min = a[i];

    return Minimum(n, a, i+1, min);
}

int main()
{
    int n;
    printf ("Enter amount of elements: "); scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        printf ("a [ %d ] = ",i);
        scanf("%d", &a[i]);
    }
    printf ("Maximum element in the array is: %d\n", Maximum(n, a, 0, a[0]));
    printf ("Minimum element in the array is: %d\n", Minimum(n, a, 0, a[0]));

    return 0;
}
