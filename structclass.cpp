#include<iostream>
using namespace std;

class base1
{
    int num;

public:
    base1(int x)
    {
      num=x;
      cout<<num<<endl;
      cout<<"Base1 class"<<endl;
    }

};

class base2
{

    int num1;

public:
    base2(int x)
    {
      num1=x;
      cout<<num1<<endl;
      cout<<"Base2 class"<<endl;
    }
};

class derived: public base1, public base2
{
int n;
public:
    derived(int p, int q, int r):base1(p),base2(q)
    {
       n=r;
       cout<<n<<endl;
       cout<<"Derived class"<<endl;
    }

};

int main()
{

  derived d(10,20,30);
  return 0;
}
