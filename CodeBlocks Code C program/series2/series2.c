//1+3+5+...+n
#include<stdio.h>
int main()
{
    int n,sum=0,a=1;//a=1 ar poriborte i hobe
    printf("Enter the last number of the series = ");
    scanf("%d",&n);

    printf("1 + 3 + 5 + ... + %d ",n);

    while(a<=n)//for(i=1;i<=n;i=i+2)
    {
        sum = sum + a ;
        a = a + 2;
    }
    printf("= %d\n",sum);

    return 0;
}
