#include<iostream>
using namespace std;

class Calculation
{
public:
    int z;
    void addition(int x, int y)
    {
        z= x+y;
        cout<<"The addition is = "<<z<<endl;
    }
    void subtraction(int x, int y)
    {
        z = x-y;
        cout<<"The subtraction is = "<<z<<endl;
    }
};

class My_Calculation : public Calculation
{
    public:
    void multiplication(int x, int y)
    {
        int z = x*y;
        cout<<"The multiplication is = "<<z<<endl;
    }
};

int main()
{
    My_Calculation obj;
    obj.addition(2,5);
    obj.subtraction(2,5);
    obj.multiplication(2,5);
}



