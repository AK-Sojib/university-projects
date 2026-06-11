/*Write a program that print a Binary right angle triangle
    1           1
    1 0         0 0
    1 0 1       1 1 1
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n = ");
    scanf("%d",&n);

    for(row=1; row<=n; row=row+1)
    {
        for(col=1; col<=row; col=col+1)
        {
            printf("%d ",col%2);//row%2
        }
        printf("\n");
    }


    return 0;
}
