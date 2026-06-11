/*1+2+3+...+n -- bebodhan 1, i=i+1
1+3+5+...+n -- bebodhan 2, i=i+2
2+4+6+...+n -- bebodhan 2, i=i+2
1+4+7+...+n -- bebodhan 3, i=i+3
*/
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter n = ");
    scanf("%d",&n);

    //printf("1+2+3+...+%d = ",n);

    for(i=1; i<=n; i=i+1)
    {
        printf("%d ",i);
        sum = sum + i;
    }
    printf("\nsum = %d\n",sum);

    return 0;
}
