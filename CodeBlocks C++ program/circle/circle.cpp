#include<iostream>
using namespace std;

class Circle
{
private:
    int radius;
    string colour;
public:
    Circle(int r = 3, string c = "red")
    {
        radius = r;
        colour = c;
    }
    void display()
    {
        cout<<radius<<endl;
        cout<<colour<<endl;
    }
    void setRadius(int r)
    {
        radius = r;
    }
    int getRadius()
    {
        return radius;
    }
};

int main()
{
    Circle obj(5,"blue");
    obj.display();
    obj.setRadius(10);
    int r1 = obj.getRadius();
    cout<<r1<<endl;
    cout<<obj.getRadius();
}
