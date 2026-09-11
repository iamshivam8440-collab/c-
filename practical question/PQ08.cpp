#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter first number:";
    cin>>a;
    /*cout<<"Enter second number:";
    cin>>b;
    */
    if(a%2==0)
    {
        cout<<"Number is even:"<<endl;
    }
    else if(!(a%2==0))
    {
        cout<<"Number is odd:"<<endl;
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
    return 0;
}