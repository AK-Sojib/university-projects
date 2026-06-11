//Write a program that print the area of circle.
#include<stdio.h>
int main()
{
    float radius,area,PI=3.1416;
    printf("Enter Radius = ");
    scanf("%f",&radius);
    area = PI * radius * radius;
    printf("Area of Circle is = %.2f\n",area);
    return 0;
}

