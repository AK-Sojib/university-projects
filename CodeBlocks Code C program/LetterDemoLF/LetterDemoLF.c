/*Write a program that enter a lowercase letter
and print a uppercase letter. Using library function.
*/
#include<stdio.h>
int main()
{
  char lower, upper;
  printf("Enter a lowercase letter : ");
  scanf("%c",&lower);
  upper=toupper(lower);//toupper is a library function,
  printf("Uppercase letter is : %c",upper);
  getch();
}
