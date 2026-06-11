//Write a program that print Armstrong number form user.
#include<stdio.h>
int main()
{
    int initailNum,finalNum,temp,r,i,sum=0;

    printf("Enter an Initial Value = ");
    scanf("%d",&initailNum);

    printf("Enter a Final Value = ");
    scanf("%d",&finalNum);

    for(i=initailNum; i<=finalNum; i++)
    {

       temp = i;

    while(temp!=0)
      {
        r  = temp % 10;
        sum = sum + r*r*r ;
        temp = temp / 10;
      }

    if(sum==i)
        {
        printf("%d\n",i);
        }
        sum=0;
    }

    return 0;
}
