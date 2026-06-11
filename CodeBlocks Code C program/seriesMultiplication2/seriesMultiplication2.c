/*   1^2*2^2*3^2*...*n^2    ,   1^3*2^3*3^3*...*n^3
     1^2*3^2*5^2*...*n^2    ,   1^3*3^3*5^3*...*n^3
     2^2*4^2*6^2*...*n^2    ,   2^3*4^3*6^3*...*n^3
*/
#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter n = ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+1)//for(i=1; i<=n; i=i+2)
    {
        result = result *i*i;//result = result *i*i*i;
    }
    printf("\nResult = %d\n",result);

    return 0;
}
