#include<stdio.h>

double triangleArea(double b,double h);

int main()
{
    double base,height;

    printf("Enter Base = ");
    scanf("%lf",&base);

    printf("Enter Height = ");
    scanf("%lf",&height);

    double area = triangleArea(base,height); //double area = 0.5 * base * height;

    printf("The Area = %.2lf\n",area);


}

double triangleArea(double b,double h)
{
    return 0.5 * b * h;
}

