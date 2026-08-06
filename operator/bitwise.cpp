#include<iostream>
using namespace std;
int main()
{
	int a=6;
	int b=10;
	/* Bitwise operator is &,|,~,^,<<,>> */
	cout<<"Bitwise Operaton:"<<endl<<endl;
	cout<<"Bitwise AND:";
	int c=a&b;
	cout<<c<<endl;
	
	cout<<"Bitwise OR:";
	int x=a|b;
	cout<<x<<endl;
	
	/* ~x=-(x+1); */
	cout<<"Bitwise NOT:";
	int y=~a;
	cout<<y<<endl;
	
	cout<<"Bitwise XOR:";
	int z=a^b;
	cout<<z<<endl;
	
	cout<<"Right shift:";
	int k=a>>2;
	cout<<k<<endl;
	
	cout<<"Left shift:";
	int l=a<<2;
	cout<<l;
	return 0;
}
