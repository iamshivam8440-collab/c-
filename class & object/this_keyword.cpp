#include<iostream>
using namespace std;
class A{
	int x;
	int y;
	public:
		void satData(int x,int y)
		{
			/* when IMV & IMF variable are same then use it this keyword */
			this->x= x;
			this->y= y;
		}
		void showData()
		{
			cout<<"Addition of "<<x<<" and "<<y<<" is:"<<x+y;
		}
};
int main()
{
	A a1;
	a1.satData(3,2);
	a1.showData();
	return 0;
}
