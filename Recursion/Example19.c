#include <stdio.h>
#include <stdlib.h>

int Count8(int n)
{
    if (!n)
        return 0;
    if (((n/10)%10)==8 && (n%10)==8)
        return 2 + Count8(n/10);
    if (n%10==8)
        return 1 + Count8(n/10);

    return Count8(n/10);
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    printf ("The number %d has the number 8 appear %d times", number, Count8(number));

    return 0;
}
