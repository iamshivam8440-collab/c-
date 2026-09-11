#include<iostream>
using namespace std;
void input();
void calculate(int []);
void display(int []);
void average(int );
void input()
{
    int marks[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter marks of subject "<<i+1<<":";
        cin>>marks[i];
    }
    display(marks);
    calculate(marks);
}
void calculate(int marks[])
{
    int temp=0;
    for(int i=0;i<5;i++)
    {
        temp+=marks[i];
    }
    cout<<"Total marks of 5 subjects is:"<<temp<<endl;
    average(temp);
}
void display(int marks[])
{
    cout<<"Marks of 5 subjects are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Marks of subject "<<i+1<<":"<<marks[i]<<endl;
    }
}
void average(int avg)
{
    int temp;
    temp=avg/5;
    cout<<"Average marks of 5 subjects is:"<<temp<<"%"<<endl;
}
int main()
{
    input();
    return 0;
}