#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf ("Enter number of rows: "); scanf("%d", &n);
    printf ("Enter number of columns: "); scanf("%d", &m);
    int a[n][m];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf ("a [ %d ][ %d ] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    int product;
    int max = -10000;
    int maxPos;
    for (int i=0; i<n; i++)
    {
        product=1;
        for (int j=0; j<m; j++)
        {
            product = product * a[i][j];
        }
        if (product > max)
        {
            max = product;
            maxPos = i;
        }
    }
    printf ("Maximum product is row number: %d\n", maxPos);
    printf ("Product of that row is: %d\n\n", max);
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (i = maxPos)
                printf ("%d  ", a[i][j]);
        }
        break;
    }

    return 0;
}
