#include<stdio.h>
int main()
{
    int x = 10;
    printf("%d \n",x++);    //x =10; postfix increment
    printf("%d \n",x);      //x=10+1=11; post value
    printf("%d \n",++x);    //x =11+1=12; prefix increment
    printf("%d \n",x);      //x =12; pre value
    printf("%d \n",x--);    //x =12; postfix decrement
    printf("%d \n",x);      //x =12-1 =11; post value
    printf("%d \n",--x);    //x =11-1=10; pre decrement
    printf("%d \n",x);      //x=10; pre value
    return 0;
}
