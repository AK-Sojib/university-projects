/*Write a program that print a right angle triangle
 1 2 3    3 3 3    1 0 1   0 0 0  A B C  c c c  * * *   # # #
 1 2      2 2      1 0     1 1    A B    b b    * *     # #
 1        1        1       0      A      c      *       #
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n = ");
    scanf("%d",&n);

    for(row=n; row>=1; row=row-1)
    {
        for(col=1; col<=row; col=col+1)
        {
            printf("%d ",col);/*printf("%d ",row); , printf("%d ",row%2);/col
                                printf("%c ",row+64);/col, printf("%c ",row+96);/col ,
                                printf("* "); ,printf("# ");

            */
        }
        printf("\n");
    }


    return 0;
}
