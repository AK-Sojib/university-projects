//Write a program that calculate the circumference/range of circle.
#include<stdio.h>
#include<math.h>
int main()
{
    float radius,circumference;
    printf("Enter Radius = ");
    scanf("%f",&radius);
    circumference = 2 * M_PI * radius;//range of circle=2*PI*r
    printf("Circumference of Circle is = %.2f\n",circumference);
    return 0;
}

