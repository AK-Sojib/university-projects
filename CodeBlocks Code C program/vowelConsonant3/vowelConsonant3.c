/*Write a program to check vowel or consonant
letter from user.
*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter = ");
    scanf("%c",&ch);

    if(ch=='A' || ch=='E' ||ch=='I' ||ch=='O'||ch=='U' ||
       ch=='a' || ch=='e' ||ch=='i' ||ch=='o'||ch=='u'
      )
        printf("Vowel");
    else
        printf("Consonant");

    return 0;
}
