//Write a program that print sum of digit
#include<stdio.h>
int main()
{
    int digit,temp,rem,sum = 0;
    printf("Enter a digit = ");
    scanf("%d",&digit);

    temp = digit;
    while(temp!=0)
    {
        rem  = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    printf("Sum of digits = %d",sum);

    return 0;
}
