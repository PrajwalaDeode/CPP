#include<iostream>
#include<string>
using namespace std;

class employee
{
protected:
    string name;
public:
    void a_assign(string name1)
    {
        name = name1;
    }
    void a_display()
    {
        cout<<"Name of employee "<<name<<endl;
    }

};

class id: public employee
{
public:
    int id1;
    void assign(int id2)
    {
        id1=id2;
    }
    void b_display()
    {
        cout<<"In public of class id"<<endl;
        cout<<"Id of employee "<<id1<<endl;
    }

    void c_display()
    {
        cout<<"Name in id1 class "<<name<<endl;
    }
};
class salary:public id
{
protected:
    int salary;
public:
    void s_assign( int a)
    {
        salary = a;
        cout<<"salary of employee "<<salary<<endl;
    }
};

int main()
{
    salary a;
    a.a_assign("mayuri");
    a.assign(90);
    a.b_display();
    a.c_display();
    a.a_display();
    a.s_assign(50000);



    return 0;
}
