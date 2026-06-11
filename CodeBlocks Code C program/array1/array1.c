//Array definition
//Array declare= dataType arrayName [arraySize];
//Array initialization
#include<stdio.h>
int main()
{
    int num[]={10,20,30};
    int sum;
/*  num[0]=10;
    num[1]=20;
    num[2]=30;
*/
    //printf("%d\n",num[2]);

    sum = num[0] + num[1] + num[2];
    printf("The sum is = %d\n",sum);

    return 0;
}
