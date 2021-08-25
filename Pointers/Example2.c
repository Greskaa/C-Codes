#include <stdio.h>
#include <stdlib.h>

void Swap (int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int a, b;
    printf ("Enter a: "); scanf("%d", &a);
    printf ("Enter b: "); scanf("%d", &b);
    printf("Before swap:\n");
    printf ("a=%d  b=%d\n", a, b);
    Swap(&a, &b);
    printf ("After swap:\n");
    printf ("a=%d  b=%d", a, b);

    return 0;
}
