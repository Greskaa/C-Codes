#include <stdio.h>
#include <stdlib.h>

typedef struct date
{
    int day;
    int month;
    int year;
} myDate;

myDate readDate ()
{
    myDate d;
    scanf("%d%d%d", &d.day, &d.month, &d.year);
    return d;
}
void printDate (myDate d)
{
    printf ("%02d.%02d.%04d\n", d.day, d.month, d.year);
}

int main()
{
    myDate d = readDate();
    printDate (d);
    return 0;
}
