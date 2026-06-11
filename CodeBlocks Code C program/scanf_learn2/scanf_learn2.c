/*Write a program to take two floating numbers from users
and print those numbers.
*/
#include<stdio.h>
int main()
{
    float num1,num2;
    printf("Enter two float numbers : ");
    scanf("%f %f",&num1,&num2);
    printf("Numbers are : %.1f %.1f\n",num1,num2);
    getch();
}
