#include <stdio.h>
#include <stdlib.h>

int EvenPositions(int number)
{
    if (!number)
        return 0;
    else
        return ((number/10)%10) + EvenPositions(number/100);
}

int main()
{
    int number;
    printf("Enter number: "); scanf("%d", &number);
    printf ("Sum of digits that are placed in even positions in the number %d is %d", number, EvenPositions(number));

    return 0;
}
