#include<iostream>
using namespace std;
class calculator{
    double a;
    double b;
    public:
    void input(double a,double b)
    {
        this->a=a;
        this->b=b;
    }
    double add()
    {
        return a+b;
    }
    double sub()
    {
        return a-b;
    }
    double mul()
    {
        return a*b;
    }
    double div()
    {
        return a/b;
    }
};

int main()
{
    double x,y;
    int choice;
    calculator c1;
    cout<<"Enter first number:";
    cin>>x;
    cout<<"Enter second number:";
    cin>>y;
    c1.input(x,y);
    do{
        cout<<"----------------------------------"<<endl;
        cout<<"Press 1 for addition:"<<endl;
        cout<<"Press 2 for subtraction:"<<endl;
        cout<<"press 3 for multiplication:"<<endl;
        cout<<"Press 4 for division:"<<endl;
        cout<<"Press 5 for exit:"<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Preform addition:"<<endl;
                   cout<<"Addition is:"<<c1.add()<<endl;
                   break;
            case 2:cout<<"Preform subtraction:"<<endl;
                   cout<<"Subtraction is:"<<c1.sub()<<endl;
                   break;
            case 3:cout<<"Preform multiplication:"<<endl;
                   cout<<"Multiplication is:"<<c1.mul()<<endl;
                   break;
            case 4:cout<<"Preform division:"<<endl;
                   if(y<=0)
                   {
                    cout<<"Division not define:"<<endl;
                    break;
                   }
                   else
                   {
                    cout<<"Division is:"<<c1.div()<<endl;
                    break;
                   }
            case 5:cout<<"Exit for program:"<<endl;
                   exit(0);
                   break;
        }
      }while(choice!=5);
    return 0;
}