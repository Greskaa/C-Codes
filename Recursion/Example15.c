#include <stdio.h>
#include <stdlib.h>

int printNumbers(int number)
{
    if (number==9999)
        return 0;
    if (number % ((number%100)+(number/100)) == 0)
        printf ("%d\n", number);

    return printNumbers(number+1);
}
int main()
{
    int n=1000;
    printNumbers(n);

    return 0;
}
