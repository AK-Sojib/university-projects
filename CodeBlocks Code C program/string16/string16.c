#include<stdio.h>
int main()
{
    char str[50];
    int capital,small,digit,i;
    i=capital=small=digit=0;

    printf("Enter a string = \n");
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
            capital++;

        else if(str[i]>=97 && str[i]<=122)
            small++;

        else if(str[i]>=48 && str[i]<=57)
            digit++;

        i++;
    }

    printf("Number of capital letters = %d\n",capital);
    printf("\nNumber of small letters = %d\n",small);
    printf("\nNumber of digits = %d\n",digit);

    getch();
}
