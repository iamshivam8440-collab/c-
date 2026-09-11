#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breath;
    public:
    void input()
    {
        cout<<"Enter the length:";
        cin>>length;
        cout<<"Enter the breath:";
        cin>>breath;
    }
    int calculate()
    {
        return length*breath;
    }
    void display()
    {
        cout<<"Area of rectangle:"<<calculate()<<endl;
    }
};
int main()
{
    rectangle r1;
    r1.input();
    r1.display();
    return 0;
}