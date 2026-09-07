#include<iostream>
using namespace std;
class A{
	int a;
	int b;
	public:
	void fun(int x,int y)
	{
		a=x;
		b=y;
	}
	void sum();	
};
void A::sum()
{
	cout<<a+b;
}
int main()
{
	A a1;
	a1.fun(3,4);
	a1.sum();
	return 0;
}
