//initialize structure variables
#include<stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1 = {27,25500.25};//local variable; initialized
    struct Person person2,person3;

    //element wise assignment
    person2.age = 25;
    person2.salary = 24500;

    //structure variable assignment
    person3 = person2;

    printf("Person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);


    printf("Person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    printf("Person3 : \n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);


    return 0;
}
