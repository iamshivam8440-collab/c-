#include<iostream>
using namespace std;
class Demo{
	public:
	static void fun()
	{
		cout<<"Hello World!!";
	}
};
int main()
{  
	/* when object is not declare call the fun with the help of scope resolution */
	Demo::fun(); // only applicable for static fun or variable
	/*
	Demo d1;
	d1.fun();
	*/
	return 0;
}
