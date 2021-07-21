#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], n;
    printf ("Enter rows/columns: "); scanf("%d", &n);
    printf ("Matrix in dimension: %dx%d\n", n, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf ("a%d%d ", i+1, j+1);
        }
        printf ("\n");
    }
    return 0;
}
