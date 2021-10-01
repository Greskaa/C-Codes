#include <stdio.h>
#include <stdlib.h>

typedef struct vector
{
    float x;
    float y;
    float z;
} myVector;

void readVector(myVector *v)
{
    scanf("%f %f %f", &v->x, &v->y, &v->z);
}
void printVector(myVector v)
{
    printf ("%.2f  %.2f  %.2f\n", v.x, v.y, v.z);
}

float ScalarProduct (myVector v1, myVector v2)
{
    return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
}

int main()
{
    myVector v;
    myVector vec1 = {3.4, 5.6, 7.8};
    readVector (&v);
    printVector(v);
    printVector(vec1);
    printf ("Dot product is: %.2f", ScalarProduct(v, vec1));

    return 0;
}
