#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct date
{
    int day;
    int month;
    int year;
} myDate;
//Read dates
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
// Compare the dates
int Compare (myDate date1, myDate date2)
{
    if (date1.year > date2.year)
        return 1;
    else if (date1.year < date2.year)
        return -1;
    else
    {
        if (date1.month > date2.month)
            return 1;
        else if (date1.month < date2.month)
            return -1;
        else
        {
            if (date1.day > date2.day)
                return 1;
            else if (date1.day < date2.day)
                return -1;
            else
                return 0;
        }
    }
}
int Difference (myDate date1, myDate date2)
{
    int days = abs(date1.day - date2.day);
    days = days + abs(date1.month - date2.month) * 30;
    days = days + abs(date1.year - date2.year) * 365;
    return days;
}
int main()
{
    int i, j, n;
    myDate d[100];
    printf ("Enter variable - n: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
        d[i] = readDate();

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("Differences between Date_1: %d and Date_2: %d is : %d\n", i, j, Difference(d[i], d[j]));
            if (Compare(d[i], d[j])==1)
                printf ("Date %d is bigger than date %d\n", i, j);
            else if (Compare(d[i], d[j])==-1)
                printf ("Date %d is smaller than date %d\n", i, j);
            else
                printf ("Date %d is equal to date %d\n", i, j);
        }
    }

    return 0;
}
