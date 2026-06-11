#include<stdio.h>
int fact(int);
int main()
{
    int num;
    printf("Enter a positive number = ");
    scanf("%d",&num);

    int value = fact(num);
    printf("The factorial of %d is = %d",num,value);
    return 0;

}
int fact(int n)
{
    if (n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

