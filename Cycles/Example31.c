#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf ("Enter a number: ");
    scanf("%d", &number);
    int temp = number;
    int flipped = 0;
    while (temp != 0)
    {
        flipped = flipped*10 + (temp%10);
        temp = temp / 10;
    }
    printf ("Flipped number of %d is number %d", number, flipped);
    return 0;
}
