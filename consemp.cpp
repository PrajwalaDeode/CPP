#include<iostream>
using namespace std;

class employee
{
    string name;
    int id;
    float salary;

public:
    employee(string name1,int id1)
    {
        cout <<"In first function"<<endl;
        name = name1;
        id = id1;

    }

    employee(float salary1)
    {
        cout <<"In second function"<<endl;
        salary = salary1;
    }

    void get()
    {
         cout << "Name: " << name <<endl;
         cout << "ID: " << id <<endl;
    }
    void get1()
    {

        cout << "Salary: " << salary <<endl;
    }
};

int main()
{
    employee a("RAM",2110);
    employee b(23.40);
    a.get();
    b.get1();
    return 0;
}
