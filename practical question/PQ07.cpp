#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    if(a>b)
    {
        cout<<"First number is greater:"<<endl;
    }
    else if(a<b)
    {
        cout<<"Second number is greater:"<<endl;
    }
    else if(a==b)
    {
        cout<<"Both number is equal:"<<endl;
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
    return 0;
}