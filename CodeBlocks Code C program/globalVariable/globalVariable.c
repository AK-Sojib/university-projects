#include<stdio.h>
int a = 10;//Global variable.
int main()
{
    printf("Inside the main function a= %d\n",a);
    display();
}
void display()
{
    printf("Inside the display function a = %d",a);
}
