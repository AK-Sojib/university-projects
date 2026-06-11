/*Write a program to print lowercase value to
uppercase value to the users.
*/
#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any lowercase letter : ");//without use library function.
    scanf("%c",&lower);//a=97 Ascii value
    printf("The uppercase letter : %c",lower-32);//A=65 Ascii value
    getch();//different=97-65=32
}
