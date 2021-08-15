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
        for (int j=0; j< m; j++)
        {
            printf ("a [ %d ][ %d ] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j< m; j++)
        {
            if (i==j)
            {
                if (a[i][j] % 2 == 0)
                    a[i][j] = a[i][j] + 2;
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j< m; j++)
        {
            printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
