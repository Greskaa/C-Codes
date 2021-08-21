#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Reversed(int number)
{
    if (number)
        return ((number%10)*pow(10,(int)log10(number))) + Reversed(number/10);
    else
        return 0;
}
int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    printf ("%d - %d\n", number, Reversed(number));
    if (number == Reversed(number))
        printf ("The number is Palindrome");
    else
        printf ("The number is not Palindrome");

    return 0;
}
