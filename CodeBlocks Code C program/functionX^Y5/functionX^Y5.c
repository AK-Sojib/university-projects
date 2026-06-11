//Write a  program that print X to the power Y , using User-defined function

#include<stdio.h>

void calculatePower(double base,double exp)
{
    double result=1,i;
    for(i=1; i<=exp; i++)
    {
        result = result * base ;
    }
    printf("%.2lf\n",result);
}

int main()
{
    double base, exp;

    printf("Enter base = ");
    scanf("%lf",&base);

    printf("Enter exponent = ");
    scanf("%lf",&exp);

    calculatePower(base,exp);

}
/*
int main()
{
    calculatePower(2,2);
    calculatePower(5,4);
    calculatePower(3,2);
    calculatePower(4,3);
    calculatePower(2,5);
}
*/
