#include<iostream>
using namespace std;
class book{
   public:
   string title;
   string author;
   float price;
   int pages;
   void input()
   {
    cout<<"Enter book title name:";
    getline(cin>>ws,title);
    cout<<"Enter book author name:";
    getline(cin>>ws,author);
    cout<<"Enter book price:";
    cin>>price;
    cout<<"Enter book pages:";
    cin>>pages;
   }
   void display()
   {
    cout<<"Book title name:"<<title<<endl;
    cout<<"Book author name:"<<author<<endl;
    cout<<"Book price:Rs "<<price<<endl;
    cout<<"Book pages:"<<pages<<endl;
   }
};
int main()
{
    book b1;
    b1.input();
    b1.display();
    return 0;
}