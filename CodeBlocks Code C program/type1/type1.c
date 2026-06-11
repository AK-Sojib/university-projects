#include<stdio.h>
int main()
struct book
{
    char name[30];
    int price;
};

/*
{
    typedef char Letter;

    Letter ch;

    ch= 'a';

    printf("ch = %c\n",ch);

    Letter ch1;

    ch1 = 'P';
    printf("ch1 = %c\n",ch1);



    return 0;
}
*/

{
   typedef struct book Book;//custom data type

   Book b = {"Amar jibon kotha",350};

   printf("Book name = %s\n",b.name);
   printf("Book price = %d\n",b.price);

   return 0;
}
