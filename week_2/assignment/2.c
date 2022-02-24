// Printing result of mathematical operation of different data types (float and interger)

#include <stdio.h>
int main()
{
    int x, y, z;
    x = 1;
    y = 2;

    z = x/y;

    printf("integer z = %d\n", z);

    float a, b, c;
    a = 1;
    b = 2;

    c = a/b;

    printf("float z = %f", c);

    return 0;
}