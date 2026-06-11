/*Write a program that print a Binary right angle triangle
    #           *
    # #         * *
    # # #       * * *
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
            printf("# ");//printf("* ");
        }
        printf("\n");
    }


    return 0;
}
