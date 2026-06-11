/*Write a program that input two numbers
and determine larger number.
*/
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter First Number  = ");
    scanf("%d",&num1);

    printf("Enter second number = ");
    scanf("%d",&num2);

    if(num1>num2)//if create with condition
        printf("Large number is = %d\n",num1);

    else if(num1<num2)//else if create with condition
        printf("Large number is = %d\n",num2);

    else//else create single. It dose not need any condition
        printf("Numbers are equal ");

    return 0;
}
