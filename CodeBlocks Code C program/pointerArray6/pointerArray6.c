//access array elements using pointer
#include<stdio.h>
int main()
{
    int a[5]= {5,10,15,20,25};
    int *ptr,i;

    ptr = &a[0];

    for(i=0; i<5; i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
    return 0;
}
