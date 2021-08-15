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
    int max = a[0][0];
    int maxPosition_i, maxPosition_j;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                maxPosition_i = i;
                maxPosition_j = j;
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf ("%d  ", a[i][j]);
        }
        printf ("\n");
    }
    printf ("Maximum element is: %d\nMaximum Position of that element is: (%d)(%d)", max, maxPosition_i, maxPosition_j);
    return 0;
}
