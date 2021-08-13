#include <stdio.h>
#include <stdlib.h>

int Sum(int n)
{
    int sum=0;
    while (n!=0)
    {
        sum = sum + (n%10);
        n = n/10;
    }
    return sum;
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    int sum = Sum(number);
    printf ("Sum of digits of the number %d is %d", number, sum);
    return 0;
}
