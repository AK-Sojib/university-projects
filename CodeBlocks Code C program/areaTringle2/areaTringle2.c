#include<stdio.h>
int main()
{
    float a,b,c,s,area;//also we can use double
    printf("Enter three sides of triangle : \n");
    scanf("%f %f %f",&a,&b,&c);//if we use double then (%lf%lf%lf)
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is = %.2f\n",area);//.2lf
    getch();
}
