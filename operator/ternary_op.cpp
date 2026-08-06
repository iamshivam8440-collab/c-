#include<iostream>
using namespace std;
int main()
{
	int age;
	/* ternary operator is ()?: */
	cout<<"Enter your age:";
	cin>>age;
	(age<18)?cout<<"Not eligible for voting":cout<<"Eligible for voting";
	return 0;
}
