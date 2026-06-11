#include<stdio.h>
int main()
{
    int array1[30],array2[30],i,n;

    printf("How many numbers = ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Array1 = ");
    for(i=0; i<5; i++)
    {
      printf("%d ",array1[i]);
    }
    //copying all the elements from array1 to array2
    for(i=0; i<5; i++)
    {
        array2[i] = array1[i];
    }

    printf("\nArray2 = ");
    for(i=0; i<5; i++)
    {
      printf("%d ",array2[i]);
    }

    return 0;
}
