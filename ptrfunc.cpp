#include<iostream>
using namespace std;

typedef void(*func_ptr)(int);

void square(int x)
{
    cout << x*x << endl;
}

void cube(int x)
{
    cout << x*x*x << endl;
}

int main()
{
    func_ptr ptrn;

    ptrn = &square;
    square(9);

    ptrn = &cube;
    cube(10);

    return 0;
}
