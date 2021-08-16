#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int a[100][100];
    printf ("Enter number of rows: "); scanf("%d", &n);
    printf ("Enter number of columns: "); scanf("%d", &m);
    if (n != m)
        printf ("Matrix elements are not symmetrical to each-other\n");
    else
    {
        for (int i=0; i<n ;i++)
    {
        for (int j=0; j<m; j++)
        {
            printf("a [ %d ][ %d ] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    int symmetry=0;
    for (int i=0; i<n ;i++)
    {
        for (int j=0; j<m; j++)
        {
            if (a[i][j] != a[j][i])
                symmetry = 1;
            break;
        }
    }
    for (int i=0; i<n ;i++)
    {
        for (int j=0; j<m; j++)
        {
            printf ("%d    ", a[i][j]);
        }
        printf ("\n");
    }
    printf ("\n");
    if (symmetry == 0)
        printf ("Matrix elements are symmetrical to each-other\n");
    else
        printf ("Matrix elements are not symmetrical to each-other");
    }

    return 0;
}
