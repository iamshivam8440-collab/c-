#include<iostream>
using namespace std;
int main()
{
	int a;
	/* unary operator is --,++ */
	cout<<"Enter the number:";
	cin>>a;
	/* pre increment  first increment then print*/
	cout<<"Pre Increment of is "<<++a<<endl;


	/* post increment first print then increment */
	cout<<"Post Increment of is "<<a++<<endl;


	int b;
	cout<<"Enter the number:";
	cin>>b;

	/* pre decrement  first decrement then print*/
	cout<<"Pre Decrement of is "<<--b<<endl;


	/* post decrement first print then decrement */
	cout<<"Post Decrement of is "<<b--<<endl;
	return 0;
}
