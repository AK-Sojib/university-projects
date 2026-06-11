#include<stdio.h>
int main()
{
    char s1[]="Sojib Uddin \
            103";// multiple line ar jonno (\) line breaking use korte hobe
    //char s1[6] ={'S','o','j','i','b','\0'};
/*    s1[0]='S';
    s1[1]='o';
    s1[2]='j';
    s1[3]='i';
    s1[4]='b';
    s1[5]='\0';  //nal character
*/
    printf("s1 = %s\n",s1);


    return 0;
}
