#include<iostream>
using namespace std;
class mobile{
    public:
    string brand;
    string model;
    int price;
    int RAM;
    int storage;
    string battery;
    string color;
    void input()
    {
        cout<<"Enter brand name:";
        getline(cin>>ws,brand);
        cout<<"Enter model name:";
        getline(cin>>ws,model);
        cout<<"Enter price:";
        cin>>price;
        cout<<"Enter RAM:";
        cin>>RAM;
        cout<<"Enter storage:";
        cin>>storage;
        cout<<"Enter battery:";
        getline(cin>>ws,battery);
        cout<<"Enter color:";
        cin>>color;
    }
    void display()
    {
        cout<<"Brand name:"<<brand<<endl;
        cout<<"Model name:"<<model<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"RAM is:"<<RAM<<endl;
        cout<<"Storage is:"<<storage<<endl;
        cout<<"Battery is:"<<battery<<endl;
        cout<<"Color is:"<<color<<endl;
    }
};
int main()
{
    mobile m1;
    m1.input();
    m1.display();
    return 0;
}