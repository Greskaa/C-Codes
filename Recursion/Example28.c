#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Sum(int number)
{
    if (number % ((number%10)+FirstDigit(number))==0)
        return 1;
    else
        return 0;
}
int FirstDigit(int num)
{
    if (num<10)
        return num;
    FirstDigit(num/10);
}
void readNumbers(int n)
{
    int number;
    if (!n)
        return 0;
    scanf("%d", &number);
    if (FirstDigit(Sum(number)))
        printf ("YES\n");
    else
        printf ("NO\n");
    return readNumbers(n-1);
}
int main()
{
    int n;
    printf ("Enter amount of numbers: "); scanf("%d", &n);
    readNumbers(n);

    return 0;
}
