//Write a program that print reverse of digit
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
        sum = sum *10 + rem;
        temp = temp / 10;
    }
    printf("Reverse of digits = %d",sum);

    return 0;
}
