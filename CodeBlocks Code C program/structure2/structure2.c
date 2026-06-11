// Global and local variable and structure
//input structure elements
#include<stdio.h>
//Global structure
struct Person
{
    int age;
    float salary;
};
   // struct Person person1,person2;//global variable

int main()
{
    struct Person person1,person2;//local variable
 /*   //local structure
    struct Person
{
    int age;
    float salary;
};
*/

    printf("Enter Information for person1\n");

    printf("Enter Age = ");
    scanf("%d",&person1.age);

    printf("\nEnter Salary = ");
    scanf("%f",&person1.salary);



    printf("Person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

    printf("Enter Information for person2\n");

    printf("Enter Age = ");
    scanf("%d",&person2.age);

    printf("\nEnter Salary = ");
    scanf("%f",&person2.salary);

    printf("Person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);


    return 0;
}
