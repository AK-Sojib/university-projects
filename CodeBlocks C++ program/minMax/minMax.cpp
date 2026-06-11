/*8.Write a program that has a function call minMax()
that takes two integer arguments and display the larger
number and return the smaller number?
*/

#include<iostream>
using namespace std;

int minMax(int num1, int num2)
{

    int sml, lar;
    if(num1>num2){
        lar = num1;
        sml = num2;
    }
    else{
        lar = num2;
        sml = num1;
    }
    cout<<"The large value is = "<<lar<<endl;
    return sml;
}

int main()
{
    int value = minMax(7,8);
    cout<<"The small value is = "<<value;
    return 0;
}
