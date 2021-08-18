#include <stdio.h>
#include <stdlib.h>

int DigitSum(int num)
{
    static int sum=0;
    if (num==0)
        return sum;
    else
    {
        sum = sum + (num%10);
        return DigitSum(num/10);
    }
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    printf ("Sum of digits of number %d is %d", number, DigitSum(number));

    return 0;
}
