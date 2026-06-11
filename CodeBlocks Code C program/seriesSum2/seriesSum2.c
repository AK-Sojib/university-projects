/*1.5+2.5+3.5+...+n -- bebodhan 1, i=i+1
1.5+3.5+5.5+...+n -- bebodhan 2, i=i+2
2.5+4.5+6.5+...+n -- bebodhan 2, i=i+2
1.5+4.5+7.5+...+n -- bebodhan 3, i=i+3
*/
#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("Enter n = ");
    scanf("%f",&n);

    //printf("1+2+3+...+%d = ",n);

    for(i=1.5; i<=n; i=i+1)
    {
        printf("%.2f ",i);
        sum = sum + i;
    }
    printf("\nsum = %.2f\n",sum);

    return 0;
}
