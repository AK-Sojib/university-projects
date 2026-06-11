/*5. Write a program that uses a function called sqr_it()
that takes one integer argument and
returns the square of it.
*/

#include<iostream>
using namespace std;
int sqr_it(int num)
{
    return num*num;
}
int main()
{
    int square = sqr_it(6);
    cout<<square;
    return 0;
}
