/*
Write a  program that print X to the power Y , using library function
//base ^ exponent
//2^3 = 2*2*2 = 8
//3^4 = 3*3*3*3 = 81
#include<stdio.h>
int main()
{
    double base, exp, result;

    printf("Enter base = ");
    scanf("%lf",&base);

    printf("Enter exponent = ");
    scanf("%lf",&exp);

    result = pow(base,exp);//pow() is a library function
    printf("%.2lf",result);

}
*/
//Write a  program that print X to the power Y , without using library function / using loop
#include<stdio.h>
int main()
{
    double base, exp, result = 1,i;

    printf("Enter base = ");
    scanf("%lf",&base);

    printf("Enter exponent = ");
    scanf("%lf",&exp);

    for(i=1; i<=exp; i++)
    {
        result = result * base ;
    }
    printf("%.2lf",result);
}
