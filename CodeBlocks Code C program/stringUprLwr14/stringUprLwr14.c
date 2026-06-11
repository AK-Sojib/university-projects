//Uppercase = strupr() and lowercase = strlwr() L.function using
#include<stdio.h>
int main()
{
    char str1[] = "mohammad sojib uddin";
    char str2[] = "MOHAMMAD SOJIB UDDIN";

    strupr(str1);//uppercase use

    strlwr(str2);//lowercase use

    printf("Lower case convert to Upper case\n");
    printf("\nstr1 = %s\n",str1);

    printf("\n\nUpper case convert to Lower case\n");
    printf("\nstr2 = %s\n",str2);

    getch();
}
