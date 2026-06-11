#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");//printing space
        }
        for(col=1; col<=2*row-1; col++)
        {
           printf("*");//printing star
        }
        printf("\n");//printing new line
    }
    return 0;
}
