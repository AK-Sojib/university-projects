//Write a program that check a digit palindrome number or not
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
    if(digit==sum)
        printf("Palindrome Number.");
    else
    printf("Not a  palindrome Number.");

    return 0;
}
