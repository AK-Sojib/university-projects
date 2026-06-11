/*Write a program that print the large
number of two numbers using conditional operator(?,:)
*/
#include<stdio.h>
int main()
{
    int num1,num2,large;

    printf("Enter two numbers = ");
    scanf("%d %d",&num1,&num2);

    large = (num1>num2) ? num1 : num2;
    printf("Large number is = %d\n",large);

    return 0;
}
