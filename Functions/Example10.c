#include <stdio.h>
#include <stdlib.h>

int First_Two(int number)
{
    number = number /100;
    return number;
}
int Last_Two(int number)
{
    number = number % 100;
    return number;
}

int main()
{
    int first, last, i;
    int counter=0;
    for (i=1000; i<=9999; i++)
    {
        first = First_Two(i);
        last = Last_Two(i);
        if (i % (first + last) == 0)
            {
                printf ("%d\n",i);
                counter++;
            }
    }
    printf ("Total count of numbers like that is: %d", counter);

    return 0;
}
