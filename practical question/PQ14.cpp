#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string color;
    string model;
    long int price;
    int speed=0;
    void input()
    {
        cout<<"Enter brand:";
        cin>>brand;
        cout<<"Enter color:";
        cin>>color;
        cout<<"Enter model:";
        cin>>model;
        cout<<"Enter price:";
        cin>>price;
    }
    void display()
    {
        cout<<"Brand is:"<<brand<<endl;
        cout<<"Color is:"<<color<<endl;
        cout<<"Enter model:"<<model<<endl;
        cout<<"Enter price:"<<price<<endl;
    }
    void start()
    {
        cout<<"Car start"<<endl;
    }
    void accelerate()
    {
        speed+=10;
        cout<<"Car speed:"<<speed<<endl;
    }
    void brake()
    {
        speed-=10;
        cout<<"Car speed:"<<speed<<endl;
    }
    void stop()
    {
        cout<<"Car stop"<<endl;
    }
};
int main()
{
    car c1;
    c1.input();
    c1.display();
    int choice;
    do{
        cout<<"-------------------------------------"<<endl;
        cout<<"Press 1 for Start:"<<endl;
        cout<<"Press 2 for Acceterate:"<<endl;
        cout<<"Press 3 for Break:"<<endl;
        cout<<"Press 4 for Stop:"<<endl;
        cout<<"Press 5 for outside from car:"<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:c1.start();
                   break;
            case 2:c1.accelerate();
                   break;
            case 3:c1.brake();
                   break;
            case 4:c1.stop();
                   break;
            case 5:cout<<"Out from car:"<<endl;
                   exit(0);
                   break;       
        }   
      }while(1); 
    return 0;
}