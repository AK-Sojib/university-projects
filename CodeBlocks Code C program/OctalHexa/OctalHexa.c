/*Write a program to print octal number
to an Hexa-decimal number.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter octal number =");
    scanf("%o",&num);
    printf("Hexa-decimal number is= %x",num);
    getch();
}

