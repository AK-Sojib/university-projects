#include<stdio.h>
int main()
{
/*  int x = 10;
    int y = x++;//y=10, postfix increment

    printf("x = %d\n",x);//x=10+1=11;
    printf("y = %d\n",y);//y=10
*/
    int x = 10;
    int y = ++x;//y=11, prefix increment

    printf("x = %d\n",x);//x=1+10=11;
    printf("y = %d\n",y);//y=11

    return 0;
}
