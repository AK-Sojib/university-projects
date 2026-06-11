//Write a program that read three numbers and print maximum
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers = \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)//using logical operator &&=logical AND
        printf("Large number is =%d\n",num1);
    else if(num2>num1 && num2>num3)//using logical operator &&=logical AND
        printf("Large number is =%d\n",num2);
    else if(num3>num1 && num3>num2)//using logical operator &&=logical AND
        printf("Large number is =%d\n",num3);
    else
        printf("Numbers are equal");

    return 0;
}
