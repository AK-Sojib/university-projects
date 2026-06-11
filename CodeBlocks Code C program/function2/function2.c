#include<stdio.h>

int square(int a)
{
    return a*a;
}

int main()
{
    int num;
    printf("Enter any integer number = ");
    scanf("%d",&num);

    int result = square(num); //int result = num * num;

    printf("The square is = %d\n",result);

}
