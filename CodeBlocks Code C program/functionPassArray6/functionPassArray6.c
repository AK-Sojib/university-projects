#include<stdio.h>
/*
int main()
{
    int num[] ={10,20,30,40,50},i;

    for(i=0; i<=4; i++)
    {
        printf("%d\n",num[i]);
    }

    return 0;
}
*/
// Using another function
void display(int x[])
{
    int i;
    for(i=0; i<=4; i++)
    {
        printf("%d ",x[i]);
    }
}
int main()
{
    int num[] = {10,20,30,40,50};
    display(num);
    return 0;
}
