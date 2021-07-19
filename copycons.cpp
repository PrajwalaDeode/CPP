#include<iostream>
using namespace std;

class code
{
   int id;
public:
   code()
   {
       cout<<"default constructor"<<endl;
   }

   code(int num)
   {
       id=num;
       cout<<"Parametrize Constructor"<<endl;
   }

   code(code &x)
   {
       id = x.id;
       cout<<"copy constructor"<<endl;
   }


};

int main()
{
    code a;
    code b(10);

    //code c=b;   //copy constructor
    code e(b);

    code d;

    return 0;
}
