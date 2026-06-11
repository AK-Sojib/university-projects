//finding length of string without using strlen() function
#include<stdio.h>
int main()
{
    char s1[]="Mohammad Sojib Uddin";//string declare

    int i=0, len=0;

    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length = %d\n",len);

    return 0;
}
