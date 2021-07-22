
#include<iostream>
using namespace std;

class addition
{
    int x,y;
public:
    void a_assign(int a, int b)
    {
       x=a;
       y=b;
    }
    void a_display()
    {
        cout<<"Addition is: "<<x+y<<endl;
    }
};
class subtraction
{
public:
    int p,q;

    void s_assign(int a, int b)
    {
       p=a;
       q=b;
    }
    void s_display()
    {
        cout<<"Subtraction is: "<<p-q<<endl;
    }
};
class calci:public addition,public subtraction
{
    int v,w;
public:
    void c_assign(int a,int b)
    {
        v=a;
        w=b;
    }
    void c_display()
    {
        cout<<"Multiplication is: "<<v*w<<endl;

    }

};

int main()
{
    calci u;
    u.c_assign(9,3);
    u.c_display();

    u.s_assign(9,3);
    u.s_display();

    u.a_assign(9,3);
    u.a_display();
    return 0;
}
