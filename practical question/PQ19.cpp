#include<iostream>
using namespace std;
class student{
    string name;
    int age;
    long roll_no;
    string branch;
    string section;
    string college;
    public:
    void input()
    {
        cout<<"Enter name of student:";
        getline(cin>>ws,name);
        cout<<"Enter age of student:";
        cin>>age;
        cout<<"Enter roll number of student:";
        cin>>roll_no;
        cout<<"Enter branch of student:";
        cin>>branch;
        cout<<"Enter section of student:";
        cin>>section;
        cout<<"Enter college name of student:";
        //ws → a manipulator that discards leading whitespace (spaces, tabs, newlines) from the input stream.
        getline(cin>>ws,college);
    }
    void display()
    {
        cout<<"Name of student:"<<name<<endl;
        cout<<"Age of student:"<<age<<endl;
        cout<<"Roll number of student:"<<roll_no<<endl;
        cout<<"Branch of student:"<<branch<<endl;
        cout<<"Section of student:"<<section<<endl;
        cout<<"College name of student:"<<college<<endl;
    }
};    
int main()
{
    int a;
    cout<<"How many student details entered:";
    cin>>a;
    student *ptr=new student[a];
    for(int i=0;i<a;i++)
    {
        cout<<"Enter details for student "<<i+1<<" is:"<<endl;
        ptr[i].input();
    } 
    for(int i=0;i<a;i++)
    {
        cout<<"Deatils of student "<<i+1<<" is:"<<endl;
        ptr[i].display();
    } 
    delete[] ptr;
    return 0;
}