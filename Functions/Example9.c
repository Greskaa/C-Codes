#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

float Diameter(float n)
{
    return 2*n;
}
float Area(float n)
{
    return PI*n*n;
}
float Perimeter(float n)
{
    return 2*PI*n;
}

int main()
{
    float radius;
    printf ("Enter circle radius: "); scanf("%f", &radius);
    float diameter = Diameter(radius);
    float area = Area(radius);
    float perimeter = Perimeter(radius);

    printf ("Diameter of circle: %.3f\n", diameter);
    printf ("Area of circle: %.3f\n", area);
    printf ("Perimeter of circle: %.3f", perimeter);

    return 0;
}
