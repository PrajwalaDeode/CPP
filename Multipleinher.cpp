
#include<iostream>
using namespace std;
class a
{
public:
    void a_display()
    {
        cout<<"A"<<endl;
    }
};
class b
{
public:
    void b_display()
    {
        cout<<"B"<<endl;
    }

};

class c:public a,public b
{
public:
    void c_display()
    {
        cout<<"c"<<endl;
    }
};

int main()
{
    c d;
    d.c_display();
    d.b_display();
    d.a_display();

    return 0;

}
