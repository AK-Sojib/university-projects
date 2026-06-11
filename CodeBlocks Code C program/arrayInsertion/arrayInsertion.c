/*
#include<stdio.h>
int main()
{
    int i,index=2,n=5;
    int arr[6]={10,20,21,87,22};

    for(i=n-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index] = 34;

    for(i=0; i<=n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int i,index=2,n=5;
    int arr[6]={10,20,21,87,22};

    for(i=n-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index] = 34;

    for(i=0; i<=n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
