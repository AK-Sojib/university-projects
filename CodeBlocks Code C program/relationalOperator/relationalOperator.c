#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer = ");
    scanf("%d",&num);

    if(num%2==0)//if statement, conditional
        printf("Even Number \n");
    else //else statement /if(num%2!=0)=if statement
        printf("Odd Number \n");

    return 0;
}
