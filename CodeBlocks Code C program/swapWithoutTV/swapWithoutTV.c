/*Write a program that swap two numbers without
using temporary variable
*/
#include<stdio.h>
int main()
{
    int num1 = 60;
    int num2 = 80;

    num1 = num1 - num2;//10-5=5
    num2 = num1 + num2;//5+5=10
    num1 = num2 - num1;//10-5=5

    printf("num1 = %d\n",num1);
    printf("num2 = %d",num2);
    return 0;
}

