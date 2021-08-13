#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Cube(int a)
{
    int cube;
    cube = pow(a,3);
    return cube;
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    int cube = Cube(number);
    printf ("%d^3 = %d", number, cube);
    return 0;
}
