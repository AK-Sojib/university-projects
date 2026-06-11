//1+2+3+4+.....+n
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the last number of the series = ");
    scanf("%d",&n);
    printf("1 + 2 + 3 + ......+%d",n);
    /*
                (1+3+5+7+....+n), i= i+2 ar jonno
                babodhan =1 hoi, 2-1=1,3-2=1;
    */
    for(i=1; i<=n; i=i+1)//jodi 2 bebodhan hoi, tahole i=i+2 dulei hobe.
    {
        sum = sum + i;
    }
    printf(" = %d\n",sum);

    return 0;
}
