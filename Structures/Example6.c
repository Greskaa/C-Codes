#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    char firstName[50];
    char lastName[50];
    int ID;
    int total_points;
} student;

student readStudent ()
{
    student result;
    int sum=0;
    int points[4];
    scanf("%s %s %d", &result.firstName, &result.lastName, &result.ID);
    printf("Points taken: \n");
    for (int i=0; i<4; i++)
    {
        scanf("%d", &points[i]);
        sum = sum + points[i];
    }
    result.total_points = sum;
    return result;
}
void printStudent(student s)
{
    Capitalize(s.firstName);
    Capitalize(s.lastName);
    printf ("Name: %s\nSurname: %s\nID: %d\nTotal Points: %d\n", s.firstName, s.lastName, s.ID, s.total_points);
}
void Capitalize(char *name)
{
    name[0] = toupper(name[0]);
    for (int i=1; i<strlen(name); i++)
        name[i] = tolower(name[i]);
}
int main()
{
    student s = readStudent();
    printStudent(s);

    return 0;
}
