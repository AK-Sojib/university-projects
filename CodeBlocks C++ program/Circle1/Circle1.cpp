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
    void setColour(string c)
    {
        colour = c;
    }
    int getRadius()
    {
        return radius;
    }
    string getColour()
    {
        return colour;
    }
};

int main()
{
    Circle obj(5,"blue");
    obj.display();
    obj.setRadius(10);
    obj.setColour("black");
    int r1 = obj.getRadius();
    string c1 = obj.getColour();
    cout<<r1<<endl;
    cout<<c1<<endl;
    cout<<obj.getRadius()<<endl;
    cout<<obj.getColour();
    return 0;
}
