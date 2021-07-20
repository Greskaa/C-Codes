#include <stdio.h>

int main()
{
    int start, finish;
    printf ("Enter start value: "); scanf("%d", &start);
    printf ("Enter finish value: "); scanf("%d", &finish);
    for (start; start <= finish; start++)
    {
        int number = start;
        if (number<0 && number%2==0)
            printf ("%d\n", 0 - number);
    }
    return 0;
}
