
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
   ~code()
   {
       cout<<"deconstructor"<<endl;
   }



};

int main()
{
    code a;

    {
      code b;

    }
    cout<<"outside b"<<endl;

    return 0;
}
