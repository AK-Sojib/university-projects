#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)//printing input number,for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)//printing space
            printf(" ");
        for(col=1; col<=row; col++)//printing star and a space
            printf("* ");
        printf("\n");//printing a new line
    }
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)//printing space
            printf(" ");
        for(col=1; col<=row; col++)//printing star and a space
            printf("* ");
        printf("\n");//printing a new line
    }

    return 0;
}
