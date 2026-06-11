//break and continue statement
#include<stdio.h>
int main()
{
    int i ;
    for (i=1; i<20; i++)
    {
        if(i%3==0)//condition true hole
            continue;//bypass./abar loop a pathiye debe.
        printf("%d \n",i);
        if(i==10)//r jodi ai condition true
            break;//loop terminate/bhondho kore debe.

    }
return 0;
}
