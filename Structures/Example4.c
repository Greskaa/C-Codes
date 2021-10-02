#include <stdio.h>
#include <stdlib.h>

typedef struct complexNumber
{
    float real;
    float imaginary;
} complexNum;

complexNum readNumbers ()
{
    complexNum c;
    scanf("%f %f", &c.real, &c.imaginary);
    return c;
}
void printNumbers (complexNum c)
{
     printf ("%.2f %+.2fi", c.real, c.imaginary);
}
complexNum Sum (complexNum c1, complexNum c2)
{
    complexNum result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}
complexNum Difference (complexNum c1, complexNum c2)
{
    complexNum result;
    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;
    return result;
}
int main()
{
    complexNum c = readNumbers();
    printNumbers(c);

    return 0;
}
