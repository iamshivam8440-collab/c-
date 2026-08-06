#include<iostream>
using namespace std;
int main()
{
	int num;
	/* Relational operator is <,<=,>,>=,==,!= */
	cout<<"Enter your number:";
	cin>>num;
	if(num<0)
	cout<<"Number is negative";
	else if(num>0)
	cout<<"Number is positive";
	else
	cout<<"Number is zero";
	return 0;
}
