/*123
   12
    1
*/#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        //printing space
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        //printing number
        for(col=1; col<=row; col++)
        {
            printf("%d",col);
/*  printf("%d ",row);          printf("%d ",row%2);/col
    printf("%c ",row+64);/col,  printf("%c ",row+96);/col ,
    printf("* "); ,             printf("# ");
*/
        }
        printf("\n");
    }
    return 0;
}
