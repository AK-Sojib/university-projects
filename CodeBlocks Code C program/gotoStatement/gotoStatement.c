/*
>structure of goto statement<
goto label:
..............
label:
 statement
*/
#include<stdio.h>
int main()
{
    int i=1;

    sojib://label
        printf("%d \t",i);//\t = tab line
        i++;
    if(i<5)
            goto sojib;//label is calling here.

    return 0;
}
