//comparing strings using strcmp() library function
#include<stdio.h>
int main()
{
    char str1[]="Sojib uddin";
    char str2[]="Sojib uddin";

    int d = strcmp(str1,str2);

    if(d==0)
    {
        printf("Strings are equal");
    }
    else
        printf("Strings are not equal");

    return 0;
}
