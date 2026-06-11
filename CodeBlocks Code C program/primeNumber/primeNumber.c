//Write a program to print prime number from user

#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter any Positive Number = ");
    scanf("%d",&num);

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count ++;
            break;
        }
    }
    if(count==0)
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    return 0;
}
