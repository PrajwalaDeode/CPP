#include<iostream>
using namespace std;

class my_int
{
   int a;
   int b;

public:
    my_int()
    {
        cout<<"Constructor get called"<<endl;
        a=0;
        b=0;
    }

    my_int(int x)
    {
        a=b=x;
        cout<<"Constructor 1 get called"<<endl;
    }

    void get()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    my_int num;
    my_int num1(25);
    num.get();
    num1.get();
}
