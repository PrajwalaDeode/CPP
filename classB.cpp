#include<iostream>
using namespace std;
class base
{
public:
   void print()
   {
       cout<<"In base class"<<endl;
   }

};

class derived: public base
{
public:
     void print()
     {
         cout<<"In derived class"<<endl;
         base::print();
     }

};

int main()
{
   derived d1;
   d1.print();
   d1.base::print();  //to asses base class
   base b1;
   b1.print();

   cout<<"using pointer"<<endl;

   derived d2;
   d2.print();
   base *ptr=&d2;
   ptr->print();
   
   return 0;
}