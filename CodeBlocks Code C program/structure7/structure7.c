#include<stdio.h>
#include<string.h>
struct Person//structure
{
    char name[30];
    int age;
    float salary;
};

void display(struct Person p)//function
{
    printf("\n\nName = %s\n",p.name);
    printf("Age = %d\n",p.age);
    printf("Salary = %.2f",p.salary);

}

int main()

{
    struct Person person1,person2;//local variable

    strcpy(person1.name,"Anisul Islam");
    person1.age = 27;
    person1.salary = 25500.25;
    display(person1);//passing structure variable to function

    strcpy(person2.name,"Sojib Uddin");
    person2.age = 22;
    person2.salary = 25500.25;
    display(person2);

    return 0;
}
