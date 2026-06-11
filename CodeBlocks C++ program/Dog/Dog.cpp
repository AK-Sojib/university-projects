#include<iostream>
#include<string>
using namespace std;

class Dog
{
private :
    int age;
    string colour;

public:
    Dog(int a, string c)
    {
        age = a;
        colour = c;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setColour(string c)
    {
        colour = c;
    }
    int getAge()
    {
        return age;
    }
    string getColour()
    {
        return colour;
    }
    void securityBreechMode()
    {
        cout<<"Security breech mode activated."<<endl;
    }
    void relaxMode()
    {
        cout<<"Relax mode activated."<<endl;
    }
    ~Dog()
    {
        cout<<"Dog object is destroyed by a destructor."<<endl;
    }

};

int main()
{
    Dog obj(5,"brown");

    /*int a = obj.getAge();
    string c = obj.getColour();
    cout<<"Age = "<<a<<" Colour = "<<c<<endl;
*/  cout<<obj.getAge()<<" "<<obj.getColour()<<endl;

    obj.setAge(7);
    obj.setColour("white");
    cout<<"age ="<<obj.getAge()<<" colour ="<<obj.getColour()<<endl;
/*  int age = obj.getAge();
    string colour = obj.getColour();
    cout<<"Age = "<<age<<" Colour = "<<colour<<endl;
*/
    obj.securityBreechMode();
    obj.relaxMode();
}
