#include <stdio.h>
#include <stdlib.h>

int firstDigit(int number)
{
    if (number < 10)
        return number;
    else
        return firstDigit(number/10);
}
int lastDigit(int number)
{
    if (number)
        return number%10;
}
void readNumbers(int start, int finish)
{
    if (firstDigit(start) == lastDigit(start))
        printf ("%d\n", start);
    if (start == finish)
        return;
    return readNumbers(start+1, finish);
}

int main()
{
    int a, b;
    printf ("Enter start value: "); scanf("%d", &a);
    printf ("Enter finish value: "); scanf("%d", &b);
    readNumbers(a, b);
    return 0;
}
