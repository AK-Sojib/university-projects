//structure comparison
#include<stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1 = {27,22000};//local variable; initialized
    struct Person person2,person3;

    //element wise assignment
    person2.age = 25;
    person2.salary = 24500;

    //structure variable assignment
    person3 = person2;


    if(person1.age == person2.age && person1.salary == person2.salary)
        printf("Person1 equal Person2");
/*    else if(person2.age == person3.age && person2.salary == person3.salary)
        printf("Person2 equal Person3");
*/
    else
        printf("Person1 not equal to person2");



    return 0;
}
