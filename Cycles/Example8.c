#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i=1; i<=number/2; i++)
    {
        if(number % i == 0)
            printf ("%d\n", i);
    }
    return 0;
}
