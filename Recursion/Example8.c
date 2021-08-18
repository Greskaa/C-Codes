#include <stdio.h>
#include <stdlib.h>

int Palindrome(int num)
{
    static int sum=0;
    if (num == 0)
        return sum;
    else
    {
        sum = sum*10 + (num%10);
        return Palindrome(num/10);
    }
}

int main()
{
    int number;
    printf ("Enter a number: "); scanf("%d", &number);
    if (number == Palindrome(number))
        printf ("Number is Palindrome");
    else
        printf ("Number is not Palindrome");

    return 0;
}
