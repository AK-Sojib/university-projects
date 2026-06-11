/*Write a program that takes two integer
and display the sum and the average.
*/
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("Enter two numbers : \n");
    scanf("%d %d",&num1,&num2);
    sum=num1 + num2;
    printf("The sum is = %d\n",sum);
    avg= (float)sum/2;//type casting
    printf("The average is = %.2f",avg);//printf("the average is = %f",avg); dile hobe.kintu dosomik ar por 6 gor asbe
    return 0;
}
