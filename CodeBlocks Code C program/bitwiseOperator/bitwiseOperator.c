/*Bitwise operator = BT AND(&),BT OR(|)
BT ExOR(^). 1st binary te nibe tarpor baki kaj sompadon hobe.
*/
#include<stdio.h>
int main()
{
    int a = 32,b = 45;
    int c;
    c = a&b;//Bitwise AND(*)
    printf("c = %d\n",c);

    c = a|b;//Bitwise OR(+)
    printf("c = %d\n",c);

    c = a^b;//Bitwise ExOR(sameValue=0,otherwise 1)
    printf("c = %d\n",c);

    return 0;
}
