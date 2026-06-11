/*7. Write a program that has a function called numbers()
that prints 1 to 10 using a for loop.
*/
#include<iostream>
using namespace std;
void numbers(void)
{
    for(int i=1; i<=10; i++){
        cout<<i<<"\t";
    }
}
int main()
{
    numbers();
    return 0;
}
