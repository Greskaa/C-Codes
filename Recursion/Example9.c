#include <stdio.h>
#include <stdlib.h>

int SumOfElements(int n, int a[], int i)
{
    static int sum=0;
    scanf("%d", &a[i]);
    sum = sum + a[i];
    if (i==n-1)
        return sum;
    else
        return SumOfElements(n, a, i+1);
}

int main()
{
    int n;
    printf ("Enter amount of elements in the array: "); scanf("%d", &n);
    int a[n];
    printf ("Sum of elements in the array is: %d", SumOfElements(n, a, 0));
    return 0;
}
