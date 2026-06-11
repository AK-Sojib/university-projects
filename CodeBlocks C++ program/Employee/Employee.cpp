#include<iostream>
using namespace std;

class Employee
{
private:
    double salary;
    int bonous;
public:
    Employee(double s, int b)
    {
        salary = s;
        bonous = b;
    }
    void setSalary(double sal)
    {
        salary = sal;
    }
    double getSalary()
    {
        return salary;
    }
    void setBonous(int b)
    {
        bonous = b;
    }
    int getBonous()
    {
        return bonous;
    }
    double totalSalary()
    {
        return salary+bonous;
    }
};
int main()
{
    Employee obj(2000.0,500);
    cout<<obj.getSalary()<<"\t"<<obj.getBonous()<<endl;
    obj.setSalary(60.98);
    obj.setBonous(900);
    cout<<obj.getBonous()<<endl;
    cout<<obj.totalSalary();
}
