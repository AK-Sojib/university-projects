//Write a program that read n numbers and display their sum and average
#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;//a[5]

    printf("How many number = ");//printf("Enter 5 number = \n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is = %d\n",sum);
    printf("The average is = %.2f\n",(float)sum/n);//type casting

    return 0;
}
