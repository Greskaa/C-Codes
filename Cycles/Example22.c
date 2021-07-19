#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf ("Enter first number: "); scanf("%d", &num1);
    printf ("Enter second number: "); scanf("%d", &num2);
    printf ("Enter third number: "); scanf("%d", &num3);
    int max = num1;
    int min = num1;
    if (num2 > num1)
        max = num2;
    if (num3 > num1)
        max = num3;
    if (num2 < min)
        min = num2;
    if (num3 < min)
        min = num3;
    printf ("Maximum number is: %d\nMinimum number is: %d", max, min);
    return 0;
