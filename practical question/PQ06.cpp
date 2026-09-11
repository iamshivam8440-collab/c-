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
    cout<<"Before swapping:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"After swapping:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}