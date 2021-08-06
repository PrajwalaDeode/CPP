#include<iostream>
using namespace std;

class mammal
{
public:
      mammal()
     {
         cout<<"mammal can give direct birth"<<endl;
     }
};

class WingedAnimal
{
public:
      WingedAnimal()
      {
          cout<<"WingedAnimal can fly"<<endl;
      }
};

class bat:public mammal,public WingedAnimal
{
public:
    bat()
    {
        cout<<"Bat"<<endl;
    }
};

int main()
{
   bat b1;
   return 0;
}

