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
    }
    void show()
    {
        cout<<"Base class"<<endl;
    }
};

class derived:public base1
{
    int num;
public:
    derived(int x,int y):base1(x)
    {
        num=y;
        cout<<num<<endl;
    }
    void display()
    {
        cout<<"Derived class"<<endl;
    }

};

int main()
{
    //Calls derived class using pointer
     base1 b(10);
     base1 *ptr;
     ptr=&b;
     ptr->show();

    derived d(10,20);
    d.show();
    d.display();

    //ptr is base class pointer hence it can not access derived class function
    ptr = &d;
    ptr->show();

    //Derived class pointer can access function of both class
    derived *dptr;
    dptr = &d;
    dptr->show();
    dptr->display();

    return 0;
}
