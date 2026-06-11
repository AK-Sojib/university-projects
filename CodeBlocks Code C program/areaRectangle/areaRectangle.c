// Write a program that prints an area of a rectangle.
#include <stdio.h>
int main()
{
    double length, width, area;
    printf("Enter length = \n");
    scanf("%lf", &length);
    printf("Enter width = ");
    scanf("%lf", &width);
    area = length * width;
    printf("The area of rectangle is = %.2lf", area);
    return 0;
}
