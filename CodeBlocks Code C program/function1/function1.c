#include<stdio.h>
//returnType functionName (arguments/parameter);

/*
int sum (int a , int b)
{
    return a+b;
}
*/

/*
int main()
{
    int num1,num2;
    printf("Enter two number = ");
    scanf("%d %d",&num1,&num2);

    int result = sum(num1,num2);//call the function here

    printf("the sum is = %d\n",result); //printf("the sum is = %d\n",sum(num1,num2));/call the function here

    return 0;
}
*/
/*
int main()
{
    printf("The Sum is = %d\n",sum(15,25));
    printf("The Sum is = %d\n",sum(15,15));
}
*/
    void sum(int a,int b,int c)
    {
        printf("The Sum is = %d\n",a+b+c);
    }
    void sub(int a,int b,int c)
    {
        printf("The Subtraction is = %d\n",a-b-c);
    }
int main()
{
    sum(10,20,30);
    sum(2,4,6);
    sum(100,200,300);

    sub(10,20,30);
    sub(6,4,2);
    sub(300,50,80);
}


