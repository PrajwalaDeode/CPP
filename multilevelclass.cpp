#include<iostream>
using namespace std;

class B
{
public:
   void display()
   {
       cout<<"B"<<endl;
   }

};
class D1:public B
{
public:
     void display()
     {
        cout<<"D1"<<endl;
     }

};
class D2:public D1
{
public:
     void display()
     {
        cout<<"D2"<<endl;
     }

};

int main()
{
    D2 d2;
    d2.display();
    d2.D1::display();
    d2.B::display();
    return 0;

}
