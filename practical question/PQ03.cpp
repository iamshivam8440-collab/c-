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
    cout<<"Sum is :"<<a+b<<endl;
    cout<<"Sub is:"<<a-b<<endl;
    cout<<"Mul is:"<<a*b<<endl;
    if(b<=0)
    {
        cout<<"Div is:undifined"<<endl;
    }
    else
    {
        cout<<"Div is:"<<a/b<<endl;
    }
    if(b<=0)
    {
         cout<<"Mod is undefined:"<<endl;
    }
    else
    {
        cout<<"Mod is:"<<a%b<<endl;
    }
     return 0;
    }