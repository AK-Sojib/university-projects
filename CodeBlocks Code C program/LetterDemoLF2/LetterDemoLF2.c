/*Write a program that enter a uppercase letter
and print a lowercase letter. Using library function.
*/
#include<stdio.h>
int main()
{
  char lower, upper;
  printf("Enter a uppercase letter : ");
  scanf("%c",&upper);
  lower=tolower(upper);//tolower is a library function,
  printf("Lowercase letter is : %c",lower);
  getch();
}

