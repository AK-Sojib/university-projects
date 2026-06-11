/*Write a program to print an integer and a floating numbers
from the users.
*/
#include<stdio.h>
int main()
{
    int num1;
    float num2;
    printf("Enter an integer and float number : ");
    scanf("%d %f",&num1,&num2);
    printf("Numbers are : %d %.2f\n",num1,num2);
    getch();
}
