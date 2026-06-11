#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
    string profession;
    int age;
public:
    Person()
    {
        profession = "Unemployed";
        age =  18;
    }
    void walk()
    {
        cout<<"Walk everyday in the morning."<<endl;
    }
    void talk()
    {
        cout<<"Talk with others respectively."<<endl;
    }
    void display()
    {
        cout<<profession<<endl;
        cout<<age<<endl;
    }
    void setProfession(string p)
    {
        profession = p;
    }
    void setAge(int a)
    {
        age = a;
    }
    string getProfession()
    {
        return profession;
    }
    int getAge()
    {
        return age;
    }
};

class Teacher : public Person
{
public:
    void canTeach()
    {
        cout<<"I can teach."<<endl;
    }
};

class Artist : public Person
{
public:
    void canSketch()
    {
        cout<<"I can sketch."<<endl;
    }
};

int main()
{
    Teacher mathTeacher;
    mathTeacher.setProfession("Teacher");
    mathTeacher.setAge(23);
    mathTeacher.display();
    mathTeacher.canTeach();
    mathTeacher.walk();
    mathTeacher.talk();

    Artist painter;
    painter.setProfession("Painter");
    painter.setAge(19);
    painter.display();
    painter.canSketch();

}
