#include<stdio.h>
int arr[30];
int fib(int n){
if(n<2){
    return n;
}
if(arr[n]>0){
    return arr[n];
}
arr[n] = fib(n-1)+fib(n-2);
return arr[n];
}
int main()
{
    int fibo = fib(30);
    printf("the fibonacci = ",fibo);
}
