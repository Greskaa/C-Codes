 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf ("Enter a: "); scanf("%d", &a);
    printf ("Enter b: "); scanf("%d", &b);
    printf ("Enter c: "); scanf("%d", &c);
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a*a + b*b == c*c)
        printf ("The triangle is right-angled");
    else
        printf ("The triangle is not right-angled");
    return 0;
}  
