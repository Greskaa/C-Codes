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
            scanf ("%d", &a[i][j]);
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (i==0 || j==0 || i==n-1 || j==m-1)
                printf("0 ");
            else
                printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
