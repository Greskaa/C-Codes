#include <stdio.h>
#include <stdlib.h>

int Num1(int number1)
{
    if (!number1)
        return 0;
    else
        return (number1%10) + Num1(number1/10);
}
int Num2(int number2)
{
    if (!number2)
        return 0;
    else
        return (number2%10) + Num1(number2/10);
}
int main()
{
    int a, b;
    printf ("Enter first number: "); scanf("%d", &a);
    printf ("Enter second number: "); scanf("%d", &b);
    printf ("Sum of digits of Number 1 is: %d\n", Num1(a));
    printf ("Sum of digits of Number 2 is: %d\n", Num2(b));
    if (Num1(a)==Num2(b))
        printf ("The two sums are equal");
    else
        printf ("The two sums are not equal");

    return 0;
}
