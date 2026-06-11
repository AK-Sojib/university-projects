/*4. Write a program that uses a function called outnum()
that takes one integer argument and
displays it on the screen.
*/

#include<iostream>
using namespace std;
int outnum(int num)
{

    cout<<num;
    return num;
}
int main()
{
    int num = outnum(6);
    return 0;
}
