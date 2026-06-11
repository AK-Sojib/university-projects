/*Multiplication table(namta):
Enter any number, num
3X1=3
3X2=6
.....
.....
3X10=30
*/
#include<stdio.h>
int main()
{
    /*akane onekbar output dekhar jonno while loop
    bebohar kora hoyese, 1 = true bujai.
    */
    while(1)
    {

        int num,i;
        printf("Enter any number = ");
        scanf("%d",&num);
        for(i=1; i<=10; i++)
        {
            printf("%d X %d  = %d\n",num,i,num*i);
        }

    }
    return 0;
}
