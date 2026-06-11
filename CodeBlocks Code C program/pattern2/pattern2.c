/*Write a program that print a number right angle triangle
    1
    2 2
    3 3 3
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
            printf("%d ",row);
        }
        printf("\n");
    }


    return 0;
}
