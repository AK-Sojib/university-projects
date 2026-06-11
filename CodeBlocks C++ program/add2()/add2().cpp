/*6. Write a program that has a function called add()
that takes two integer arguments and
returns the result.
*/
#include<iostream>
using namespace std;
int add(int a, int b)
{
    int result = a+b;
    return result;
}
int main()
{
    int result = add(2,3);
    cout<<result;
    return 0;
}
