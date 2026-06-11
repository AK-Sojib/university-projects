#include<iostream>
using namespace std;

class Shape
{
private:
    double height, breadth, radius;
public:
    Shape()
    {
        height = 1.0;
        breadth = 1.0;
        radius = 1.0;
    }
    friend void triArea(Shape &obj);
    friend void circArea(Shape &obj);

    double triArea()
    {
        return 0.5*breadth*height;
    }
    double circArea()
    {
        return 3.1416*radius*radius;
    }

};

void triArea(Shape &obj)
{
    obj.breadth=10.0;
    obj.height = 15.0;
    cout<<"Area of triangle is = "<<obj.triArea()<<endl;
}
void circArea(Shape &obj)
{
    obj.radius = 10.0;
    cout<<"Area of circle is = "<<obj.circArea()<<endl;
}

int main()
{
    Shape triObj;
    triArea(triObj);

    Shape circObj;
    circArea(circObj);

    return 0;
}






