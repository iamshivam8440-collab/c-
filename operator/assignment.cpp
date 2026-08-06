#include<iostream>
using namespace std;
int main()
{
	int a=6;
	int b=10;
	int result;
	/* Assignment operator is +=,-=,*=,/=,%=,= */
	cout<<"Assignment Operator:"<<endl<<endl;
	cout <<"Addition Assignment:";
	result+=a;
	cout<<result<<endl;
	
	cout<<"Subtraction Assignment:";
	int sub=0;
	sub-=b;
	cout<<sub<<endl;
	
	cout<<"Multiplication Assignment:";
	int mul=1;
	mul*=a*b;
	cout<<mul<<endl;
	
	cout<<"Division Assignment:";
	int div=100;
	div/=10;
	cout<<div<<endl;
	
	cout<<"Modulus Assignment:";
	int mod=4;
	mod%=3;
	cout<<mod<<endl;
	
	cout<<"Assign:";
	int z=mod;
	cout<<z;
	return 0;
}
