//Write a program that print the area of circle.
#include<stdio.h>
int main()
{
    float radius,area;
    printf("Enter Radius = ");
    scanf("%f",&radius);
    area = 3.1416 * radius * radius;
    printf("Area of Circle is = %.2f\n",area);
    return 0;
}
