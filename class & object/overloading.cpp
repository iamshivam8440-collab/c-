#include<iostream>
using namespace std;
class student{
	double a;
	double b;
	public:
		void getdata(double x,double y)
		{
			x=a;
			y=b;
		}
		void add()
		{
			cout<<"Sum is:"<<a+b;
		}
};
int main()
{
	student s1;
	double a,b;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	s1.getdata(a,b);
	s1.add();
	return 0;
}
