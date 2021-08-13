#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Powered(int n, int p)
{
    return pow(n,p);
}

int main()
{
    int number, power;
    printf ("Enter a number: "); scanf("%d", &number);
    printf ("Enter which power:" ); scanf("%d", &power);
    int result  = Powered(number, power);
    printf ("%d^%d = %d", number, power, result);
    return 0;
}
