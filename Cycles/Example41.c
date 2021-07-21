#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, finish, counter, total=0;
    printf ("Enter a start value: "); scanf("%d", &start);
    printf ("Enter a finish value: "); scanf("%d", &finish);
    for (start; start<=finish; start++)
    {
        counter = 0;
        for (int i=2; i<start; i++)
        {
            if (start % i == 0)
                counter++;
        }
        if (counter == 0)
        {
            printf ("%d\n", start);
            total++;
        }
    }
    printf ("Total prime numbers in this interval are: %d", total);
    return 0;
}
