#include <stdio.h>
#include <stdlib.h>

int Fibonacci (int num1, int num2, int n)
{
    static int counter=2;
    int sum;
    if (counter == n)
        return 0;
    else
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;

        printf ("%d  ", sum);

        counter++;
        return Fibonacci(num1, num2, n);
    }
}

int main()
{
    int a=1, b=1, n;
    printf ("Enter until which number you want to use the Fibonacci Sequence: ");
    scanf("%d", &n);
    printf ("%d  %d  ", a, b);
    Fibonacci(a, b, n);

    return 0;
}
