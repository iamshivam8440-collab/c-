#include<iostream>
using namespace std;
void signal(char );
void signal(char light)
{

	if()
	cout<<"Stop"<<endl;
	else if(light)
	cout<<"Go"<<endl;
	else
	cout<<"Go slow"<<endl;
}
int main()
{
	char light[10];
	cout<<"Signal light color:"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"1.Green"<<endl<<"2.Red"<<endl<<"3.Yellow"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"Enter signal light color:";
	cin>>light;
	signal(light);
	return 0;
}
