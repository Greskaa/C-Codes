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
    int max = Maximum(n, a, 0, a[0]);
    int min = Minimum(n, a, 0, a[0]);
    printf ("Maximum element in the array is: %d\n", max);
    printf ("Minimum element in the array is: %d\n", min);
    float average = (max+min)/2.0;
    printf ("Average value of Max and Min elements is: %.2f", average);

    return 0;
}
