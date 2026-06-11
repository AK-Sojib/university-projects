#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x = \n");
    scanf("%d",&x);
    printf("Enter y = ");
    scanf("%d",&y);
    double result = pow(x,y);
    printf("The power is = %.2lf",result);
    return 0;
}
