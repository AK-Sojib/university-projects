#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark = ");
    scanf("%d",&mark);
    if(mark>100 || mark<0)
            printf("Invalid mark");

    else if(mark>=80 && mark<=100)
        printf("Your grade is = A+ \n");
    else if(mark>=70 && mark<=79)
        printf("Your grade is = A \n");
    else if(mark>=60 && mark<=69)
        printf("Your grade is = A- \n");
    else if(mark>=50 && mark<=59)
        printf("Your grade is = B \n");
    else if(mark>=40 && mark<=49)
        printf("Your grade is = C \n");
    else if(mark>=33 && mark<=39)
        printf("Your grade is = D \n");
    else
        printf("You are grade is = F");

    return 0;
}
