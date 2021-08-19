#include <stdio.h>
#include <stdlib.h>

int Power(int num, int p)
{
    if (p==0)
        return 1;
    else
        return num * Power(num, p-1);
}

int main()
{
    int number, power;
    printf ("Enter a number: "); scanf("%d", &number);
    printf ("Enter a power: "); scanf("%d", &power);
    printf ("%d^%d = %d", number, power, Power(number, power));

    return 0;
}
