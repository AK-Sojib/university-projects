#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark = ");
    scanf("%d",&mark);
    if(mark>=40)
        printf("You are Pass. ");
    else
        printf("You are Fail. ");

    return 0;
}
