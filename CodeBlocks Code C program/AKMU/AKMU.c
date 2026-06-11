/*Write a c program to declare an array of 10 integers
and print the elements of the array.
*/
#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    //for input elements
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    //for printing elements
    for(i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
