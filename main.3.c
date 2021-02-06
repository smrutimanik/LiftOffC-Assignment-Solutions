/* Cprogram to find diameter, circumference, and area of a circle */
#include <stdio.h>
int main()
{
    float r, d, c, a = 0;

    //r = radius
    //d = diameter
    //c = circumference
    //a = area

    printf("enter the radius of the circle::\n");
    scanf("%f", &r);

    /* calculation of diameter, circumference and area */
    d = 2*r;
    c=2*3.14*r;
    a=3.14*(r*r);

    /* print output */
    printf("\n");
    printf("Diameter=%f units \n", d);
    printf("circumference=%f units \n", c);
    printf("Area=%f sq. units \n", a);

    return 0;
}
