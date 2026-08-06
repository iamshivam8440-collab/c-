#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"Number is divisible by 2 and 3::";
	for(i=0;i<100;i++)
	{
		if(i%2==0&&i%3==0)//it work in AND gate;
		cout<<i<<" ";
	}
	return 0;
}

