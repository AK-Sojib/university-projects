/*Pattern making in c program using number right angle triangle.
1
1 2
1 2 3
1 2 3 4
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
            printf("%d ",col);
        }
        printf("\n");
    }


    return 0;
}
