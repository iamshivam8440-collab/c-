#include<iostream>
using namespace std;
int input(int *,int *);
int add(int ,int );
int sub(int ,int );
int mul(int ,int );
int div(int ,int );
int mod(int ,int );
int mod(int a,int b)
{
	input(&a,&b);
	int Mod;
	if(b==0)
	{
		cout<<"Modulus not possible:"<<endl;
	
	}
	else
	{
		Mod=a%b;
		cout<<"Modulus is:"<<Mod<<endl;
    }
	return 0;
}
int div(int a,int b)
{
	input(&a,&b);
	int Div;
	if(b==0)
	{
		cout<<"Division not possible:"<<endl;
	
	}
	else
	{
		Div=a/b;
		cout<<"Division is:"<<Div<<endl;
    }
	return 0;
}
int mul(int a,int b)
{
	input(&a,&b);
	int Mul=a*b;
	cout<<"Multiplication is:"<<Mul<<endl;
	return 0;
}
int sub(int a,int b)
{
	input(&a,&b);
	int sub=a-b;
	cout<<"Subtraction is:"<<sub<<endl;
	return 0;
}
int add(int x,int y)
{
	input(&x,&y);
	int sum=x+y;
	cout<<"Add is:"<<sum<<endl;
	return 0;
}
int input(int *a,int *b)
{
	cout<<"-----------------------------"<<endl;
	cout<<"Enter first number:";
	cin>>*a;
	cout<<"Enter second number:";
	cin>>*b;
	cout<<"-----------------------------"<<endl;
	return 0;
}
int main()
{
	int a,b,num;
	/* Arithmatic operator is +,-,*,/,% */
	while(1)
	{
		cout<<"-----------------------------"<<endl;
		cout<<"Press 1 for addition:"<<endl;
		cout<<"Press 2 for subtraction:"<<endl;
		cout<<"Press 3 for multiplication:"<<endl;
		cout<<"Press 4 for division:"<<endl;
		cout<<"Press 5 for modulus:"<<endl;
		cout<<"Press 6 for exit program:"<<endl;
		cout<<"-----------------------------"<<endl<<endl;
		cout<<"Enter the for perform operation:";
		cin>>num;
		switch(num)
		{	
		 case 1:cout<<"Addition:"<<endl;
		 		add(a,b);// addition
		 		break;
		 case 2:cout<<"Subtraction:"<<endl;
		 		sub(a,b);//subtraction
		 		break;
		 case 3:cout<<"Multiplication:"<<endl;
		 		mul(a,b);//multiplication
		 		break;
		 case 4:cout<<"Division:"<<endl;
		 		div(a,b);//division
		 		break;
		 case 5:cout<<"Modulus:"<<endl;
		 		mod(a,b);//modulus
		 		break;
		 case 6:exit(0);
		 		break;		 		
		 default:cout<<"Invalid input:"<<endl;		
		}
	}
	return 0;
}
