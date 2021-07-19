#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, counter=0;
    printf ("Enter numbers: ");
    while (scanf("%d", &number))
    {
        if (number % 3 == 0)
        {
            printf ("%d is divisible by 3\n", number);
            counter++;
        }
    }
    printf ("Total numbers that are divisible by 3: %d", counter);
    return 0;
}
