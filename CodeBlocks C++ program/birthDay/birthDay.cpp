#include<iostream>
#include<string>
using namespace std;

class Birthday{
private:
    int day, month, year;
public:
    Birthday(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void printDate()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
class Person{
private:
    string name;
    Birthday date;
public:
    Person(string n, Birthday d):name(n),date(d){}
    void Info()
    {
        cout<<name<<"born on ";
        date.printDate();
    }
    };
    int main()
    {
        Birthday lutfor(23,4,2002);
        Birthday sojib(24,1,1999);
        Birthday hasan(15,2,1998);
        Birthday arafat(12,3,1999);

        Person obj("Lutfor ", lutfor);
        Person obj1("Sojib ", sojib);
        Person obj2("Hasan ", hasan);
        Person obj3("Arafat ", arafat);

        obj.Info();
        obj1.Info();
        obj2.Info();
        obj3.Info();
    }

