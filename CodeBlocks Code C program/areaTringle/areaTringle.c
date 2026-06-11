/*Write a program that calculates the
area of a triangle.
*/
#include<stdio.h>
int main()
{
    float base,height,area;
    printf("The base and height is = \n");
    scanf("%f %f",&base,&height);

    area = (float)1/2 * base * height;//type casting or also you can use 0.5
    printf("Area is = %.2f \n",area);
    return 0;
}
