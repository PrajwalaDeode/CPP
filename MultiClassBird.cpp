#include<iostream>
#include<string>
using namespace std;
class bird
{
    string  name;
public:
    void assign(string x)
    {
        name=x;
    }
    void display()
    {
        cout<<"Name of Bird "<<name<<endl;
    }
};

class feather:public bird
{
    int c;
public:
    void assign(int v)
    {
        c=v;
    }
    void display()
    {
        if(c==1)
        {
            cout<<"Feathers"<<endl;
        }
        else
        {
            cout<<"Featherless"<<endl;
        }

    }
};

class egg:public feather
{
    int l;
public:
    void assign(int m)
    {
        l=m;
    }
    void display()
    {
        if(l==1)
        {
            cout<<"Lay eggs"<<endl;
        }
        else
        {
            cout<<"Do not lay eggs"<<endl;
        }
    }
};

int main()
{
    egg p;
    p.assign(1);
    p.display();
    p.feather::assign(1);
    p.feather::display();
    p.bird::assign("Sparrow");
    p.bird::display();
    return 0;
}
