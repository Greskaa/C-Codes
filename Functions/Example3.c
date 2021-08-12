#include <stdio.h>
#include <stdlib.h>

int Check(int number)
{
    if (number%2==0)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    printf ("Enter number: "); scanf("%d", &num);
    int result = Check(num);
    if (result == 1)
        printf ("The number %d is Even", num);
    else
        printf ("The number %d is Odd", num);
    return 0;
}
