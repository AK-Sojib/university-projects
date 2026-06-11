#include<stdio.h>
int main()
{
/*      int x = 10;
        int y = x--;//y=10, postfix decrement

        printf("x = %d\n",x);//x=10-1=9;
        printf("y = %d\n",y);//y=10
*/

        int x = 10;
        int y = --x;//y =9, prefix decrement

        printf("x = %d\n",x);//x = 9;
        printf("y = %d\n",y);//y = 9;

        return 0;
}
