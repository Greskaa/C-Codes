#include <stdio.h>
#include <stdlib.h>

int Sum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int num1, num2;
    printf ("Enter first number: "); scanf("%d", &num1);
    printf ("Enter second number: "); scanf("%d", &num2);
    int add = Sum(num1, num2);
    printf ("%d + %d = %d", num1, num2, add);

    return 0;
}
