#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ArmstrongNumber (int n)
{
    int counter=0, sum=0;
    int temp = n, num = n;
    int digit;
    while (temp)
    {
        counter++;
        temp = temp / 10;
    }
    while (n)
    {
        digit = n % 10;
        sum = sum + (pow(digit,counter));
        n = n / 10;
    }
    if (sum == num)
        return 0;
    else
        return 1;
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    int armstrong = ArmstrongNumber(number);
    if (armstrong == 0)
        printf ("Number %d is Armstrong", number);
    else
        printf ("Number %d is not Armstrong", number);

    return 0;
}
