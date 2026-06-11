/*9. There are 8 ounces in a cup. Write a program that converts
ounces to cups. Use a function called o_to_c() to perform the conversion.
Call it with the number of ounces and it return the number of cups.
*/
#include<iostream>
using namespace std;
float o_to_c(float ounces)
{
    float cup;
    cup = ounces/8;
    return cup;
}
int main()
{
    int ounces;
    cout<<"Enter Ounces = ";
    cin>>ounces;
    float  cup = o_to_c(ounces);
    cout<<"Cup = "<<cup;
    return 0;
}
