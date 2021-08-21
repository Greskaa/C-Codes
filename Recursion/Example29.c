#include <stdio.h>
#include <stdlib.h>

int SumElements(int n, int a[])
{
    int even=0, odd=0;
    for (int i=0; i<n; i++)
    {
        if (i%2)
            odd = odd + a[i];
        else
            even = even + a[i];
    }
    if (even > odd)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    int a[100];
    printf ("Enter number of elements: "); scanf("%d", &n);
    for (int i=0; i< n; i++)
    {
        printf ("a [ %d ] = ",i);
        scanf("%d", &a[i]);
    }
    if (SumElements(n, a))
        printf ("The array fulfills the condition");
    else
        printf ("The array does not fulfill the condition");

    return 0;
}
