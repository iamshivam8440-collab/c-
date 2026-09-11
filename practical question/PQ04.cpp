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
        cout<<"First number is greater than second number"<<endl;
    }
    else if(a<b)
    {
        cout<<"First number is less than second number"<<endl;
    }
    else if(a>=b)
    {
        cout<<"First numbner is greater than or equal to second number"<<endl;
    }
    else if(a<=b)
    {
        cout<<"First number is less than or equal to second number"<<endl;
    }
    else if(a==b)
    {
        cout<<"First number is equal to second number"<<endl;
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
    return 0;
}