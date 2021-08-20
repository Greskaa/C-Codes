#include <stdio.h>
#include <stdlib.h>

int Prime(int num)
{
    for (int i=2; i<=num/2; i++)
    {
        if (num%i==0)
            return Prime(num+1);
    }
    return num;
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    printf ("%d - %d = %d", Prime(number), number, Prime(number)-number);

    return 0;
}
