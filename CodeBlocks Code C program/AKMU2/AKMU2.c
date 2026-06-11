/* Write a c program to declare a 2D array of 3 integers and
print the elements of array
*/
#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j;
    //for input the elements
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //for printing the elements
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",arr[i][j]);
        }
    }

    return 0;
}
