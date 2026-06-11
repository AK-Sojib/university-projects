//Copy a string using strcpy() function
#include<stdio.h>
int main()
{
    char source[]="C programming";
    char target[20];

    strcpy(target,source);// jei char ar moddhe copy korbo sei char age thakbe

    printf("Source string = %s\n",source);
    printf("Target string = %s\n",target);


    return 0;
}
