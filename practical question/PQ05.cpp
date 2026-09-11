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
    if(a%2==0 && b%2==0)
    {
        cout<<"Both number if divided by 2"<<endl;
    }
    else if(a%2==0 || b%2==0)
    {
        cout<<"One number is divided by 2"<<endl;
    }
    else if(!(a%2==0) && !(b%2==0))
    {
        cout<<"Both number is not divided by 2"<<endl;
    }
    else
    {
        cout<<"Both number is not divided by 2"<<endl;
    }
    return 0;
}