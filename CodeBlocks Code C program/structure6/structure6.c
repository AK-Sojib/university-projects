//Array within structure
#include<stdio.h>

struct Person
{
    char name[30];
    int age;
    float salary;
};

int main()
{
    struct Person person[4];
    int i;

    for(i=0; i<4; i++)
    {
        printf("\nEnter information for Person %d\n",i+1);

        printf("Enter Name = ");
        fflush(stdin);//standard library to solve buffer
        gets(person[i].name);//string ar sahajje input newa.
        //scanf("%c",person[i].name);

        printf("Enter Age = ");
        scanf("%d",&person[i].age);

        printf("Enter Salary = ");
        scanf("%f",&person[i].salary);
    }
    //for Printing information
    for(i=0; i<4; i++)
    {
        printf("\n\nInformation for Person %d\n",i+1);

        printf("Name = %s\n",person[i].name);
        printf("Age = %d\n",person[i].age);

        printf("Salary = %.2f",person[i].salary);

    }

    return 0;
}
