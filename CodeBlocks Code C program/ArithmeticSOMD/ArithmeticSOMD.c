#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("Enter two numbers : \n");
    scanf("%d %d",&num1,&num2);

    result = num1 + num2;
    printf("Sum is = %d \n",result);

    result = num1 - num2;
    printf("Sub is = %d \n",result);//substraction

    result = num1 * num2;
    printf("Mul is = %d \n",result);//multiplication or multiple

    result = num1 / num2;
    printf("Div is = %d \n",result);//Division(vag) or divided

    result = num1 % num2;
    printf("Remainder is = %d",result);//reminder(vagses)

return 0;
}


