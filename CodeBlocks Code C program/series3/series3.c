/*1.2+2.3+3.4+...+n1.n2--1,1
1.3+2.5+3.7+...+n1.n2--1,2
*1.2.3+2.3.4+3.4.5+...+n1.n2.n3--1,1,1
*/
#include<stdio.h>
int main()
{
    int n1,n2,sum=0,a=1,b=2;
    printf("Enter n1 and n2 = \n");
    scanf("%d %d",&n1,&n2);

    printf("1.2+2.3+3.4+...+%d.%d = ",n1,n2);

    while(a<=n1 && b<=n2)
    {
        sum = sum + a*b;
        a = a + 1;
        b = b + 1;
    }
    printf("%d\n",sum);
//    printf("1.2+2.3+3.4+...+%d.%d = %d\n",n1,n2,sum);
    return 0;
}
