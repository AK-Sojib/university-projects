/*Write a program that print a Alphabetic right angle triangle
    A           A       /ASCII value= 64(A) 96(a)
    A B         B B
    A B C       C C C
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
            printf("%c ",col+64);//row+64,col+96,row+96
        }
        printf("\n");
    }


    return 0;
}
