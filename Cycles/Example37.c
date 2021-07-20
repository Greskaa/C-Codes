#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, b1, c1, a2, b2, c2;
    int temp;
    printf ("Enter side lengths of first triangle: \n");
    printf ("Enter a: "); scanf("%d", &a1);
    printf ("Enter b: "); scanf("%d", &b1);
    printf ("Enter c: "); scanf("%d", &c1);
    printf ("Enter side lengths of second triangle: \n");
    printf ("Enter a: "); scanf("%d", &a2);
    printf ("Enter b: "); scanf("%d", &b2);
    printf ("Enter c: "); scanf("%d", &c2);
    if (a1 > b1)
    {
        temp = a1;
        a1 = b1;
        b1 = temp;
    }
    if (a1 > c1)
    {
        temp = a1;
        a1 = c1;
        c1 = temp;
    }
    if (b1 > c1)
    {
        temp = b1;
        b1 = c1;
        c1 = temp;
    }
    if (a2 > b2)
    {
        temp = a2;
        a2 = b2;
        b2 = temp;
    }
    if (a2 > c2)
    {
        temp = a2;
        a2 = c2;
        c2 = temp;
    }
    if (b2 > c2)
    {
        temp = b2;
        b2 = c2;
        c2 = temp;
    }
    if (((a1+b1)<=c1 || (b1+c1)<=a1 || (a1+c1)<=b1) && ((a2+b2)<=c2 || (b2+c2)<=a2 || (a2+c2)<=b2))
         printf ("Triangles can be constructed\n");
    else if ((a1==a2)&&(b1==b2)&&(c1==c2))
        printf ("Triangles are equal\n");
    else printf ("Triangles are not equal");
    return 0;
}   
