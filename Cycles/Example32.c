#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum1=0, sum2=0;
    printf ("Enter first number: "); scanf("%d", &num1);
    printf ("Enter second number: "); scanf("%d", &num2);
    int temp1 = num1;
    int temp2 = num2;
    while (temp1 != 0)
    {
        sum1 = sum1 + (temp1 % 10);
        temp1 = temp1 / 10;
    }
    while (temp2 != 0)
    {
        sum2 = sum2 + (temp2 % 10);
        temp2 = temp2 / 10;
    }
    printf ("\n");
    printf ("Sum of first number %d is %d\nSum of second number %d is %d\n", num1, sum1, num2, sum2);
    if (sum1 == sum2)
        printf ("The sums are equal");
    else
        printf ("The sums are not equal");
    printf ("\n");

    return 0;
}
