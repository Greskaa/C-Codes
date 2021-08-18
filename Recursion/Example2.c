#include <stdio.h>
#include <stdlib.h>

int Sum(int number, int sum)
{
    sum = sum + number;
    if (number == 0)
        return sum;
    else
        return Sum(number-1, sum);
}

int main()
{
    int number;
    printf ("Enter number: "); scanf("%d", &number);
    printf ("%d", Sum(number, 0));

    return 0;
}
