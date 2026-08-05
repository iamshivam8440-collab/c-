#include<iostream>
using namespace std;
int add(int ,int );
int diff(int ,int );
int mul(int ,int );
int div(int ,int );
int div(int a,int b)
{
	int c=a/b;
	return c;
}
int mul(int a,int b)
{
	int c=a*b;
	return c;
}
int diff(int a,int b)
{
	int c=a-b;
	return c;
}
int add(int a,int b)
{
	int c=a+b;
	return c;
}
int main()
{
	int a,b;
	int sum,sub,Mul,Div;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the second number:";
	cin>>b;
	sum=add(a,b);
	sub=diff(a,b);
	Mul=mul(a,b);
	Div=div(a,b);
	cout<<"Sum of "<<a<<" and "<<b<<" is:"<<sum<<endl;
	cout<<"Sub of "<<a<<" and "<<b<<" is:"<<sub<<endl;
	cout<<"Mul of "<<a<<" and "<<b<<" is:"<<Mul<<endl;
	cout<<"Div of "<<a<<" and "<<b<<" is:"<<Div<<endl;
	return 0;
}
