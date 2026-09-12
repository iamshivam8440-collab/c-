#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    int ID;
    int age;
    long int salary;
    string department;
    int leave=0;
    int days;
    void input()
    {
        cout<<"Enter name:";
        getline(cin>>ws,name);
        cout<<"Enter ID:";
        cin>>ID;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter salary:";
        cin>>salary;
        cout<<"Enter department:";
        cin>>department;
    }
    void display()
    {
        cout<<"Name is:"<<name<<endl;
        cout<<"ID is:"<<ID<<endl;
        cout<<"Age is:"<<age<<endl;
        cout<<"Salary is:"<<salary<<endl;
        cout<<"Department is:"<<department<<endl;  
    }
    void work()
    {
        cout<<name<<" is working:"<<endl;
    }
    void applyleave()
    {
        cout<<"Enter how many days for leave:";
        cin>>days;
        leave+=days;
        cout<<name<<" is applied leave for "<<leave<<" days:"<<endl;
    }
    void overtime()
    {
        cout<<name<<" is working Overtime:"<<endl;
    }
};
int main()
{
    employee e1;
    e1.input();
    e1.display();
    int choice;
    do{
        cout<<"----------------------------"<<endl;
        cout<<"Press 1 for working:"<<endl;
        cout<<"Press 2 for leave:"<<endl;
        cout<<"Press 3 for overtime:"<<endl;
        cout<<"Press 4 for timeover:"<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:e1.work();
                   break;
            case 2:e1.applyleave();
                   break;
            case 3:e1.overtime();
                   break;
            case 4:cout<<"Time over:"<<endl;
                   exit(0);
                   break;

        }
    }while(choice!=4);
    return 0;
}