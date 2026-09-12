#include<iostream>
using namespace std;
#define PI 3.14
class circle{
    public:
    double radius;
    void input()
    {
        cout<<"Enter radius of a circle:";
        cin>>radius;
    }
    double calculate()
    {
        return PI*radius*radius;
    }
    void display()
    {
        cout<<"Area of circle is:"<<calculate()<<endl;
    }
};
int main()
{
    circle c1;
    c1.input();
    c1.display();
    return 0;
}