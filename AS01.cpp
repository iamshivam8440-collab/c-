#include<iostream>
using namespace std;
/*     Encapsulation  start     */
class sum{
	int a;
	int b;
	public:
		void getdata()
		{
			cout<<"Enter first number:";
			cin>>a;
			cout<<"Enter second number:";
			cin>>b;
		}
		/*  abstraction  start*/
		int logic()
		{
		    return a+b;
		}
		/*  abstraction  end*/
};
/*     Encapsulation  start     */
int main()
{
	sum s1;
	s1.getdata();
	int s=s1.logic();
	cout<<s;
	return 0;
}
