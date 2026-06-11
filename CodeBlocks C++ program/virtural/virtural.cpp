#include<iostream>
using namespace std;
class BC
{
public:
    virtual void show( )
    {
        cout<<"I am in Base class";
    }
};
class DC: public BC
{
public:
    void show( )
    {
        cout<<"I am in Derived class";
    }
};
int main()
{
    BC *ptr;
    DC obj;
    ptr=&obj;
    ptr->show();
    return 0;
}
