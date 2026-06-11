/*Write a program to print an uppercase letter
to a lowercase letter form the users.
*/
#include<stdio.h>
int main()
{
    char upper;
    printf("Enter the uppercase letter : ");//without use library function
    scanf("%c",&upper);//A=65
    printf("The lowercase letter is : %c",upper+32);//a=97
    getch();//Equation =65+32=97
}
