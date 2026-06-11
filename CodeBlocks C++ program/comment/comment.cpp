#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string com;
    bool flag;
    cout<<"Enter a string = ";
    cin>>com;
    int n =  com.size();

    if(n>=2 && com[0]=='/' && com[1]=='/')
    {
        flag= true;
        cout<<"\nIt is a single line comment"<<endl;
    }
    else if(n>=4 && com[0]=='/' && com[1]=='*' && com[n-1]=='/' && com[n-2]=='*')
    {
        flag = true;
        cout<<"\nIt is a Multi line comment"<<endl;
    }
    else
    {
        flag = false;
        cout<<"not a comment"<<endl;
    }
    return 0;
}
