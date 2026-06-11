/*2. Write a program that has a function called add().
This function adds two numbers and displays the result.

3. Add another function called sub()
 to the program given above. This function subtracts two
numbers and displays the result.
*/
#include<iostream>
using namespace std;
int add(int a, int b)
{
    int sum= a + b;
    //sum =
    cout<<"Sum is = "<<sum<<endl;
    return sum;
}
int sub(int a, int b)
{
    int sub = a-b;
    cout<<"Sub is = "<<sub<<endl;
    return sub;

}

int main()
{
    int sum = add(20,30);
    int su = sub(20,30);
    return 0;
}
