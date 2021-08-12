#include<iostream>
using namespace std;
template<class T>
void func(T x)
{
    cout<<"value of x: "<<x<<endl;
}

template<class T, class T2>
void func(T x, T2 y)
{
    cout<<"value of x: "<<x<<endl;
    cout<<"value of y: "<<y<<endl;
}

int main()
{
    func(10);
    func(89,23.7);
    return 0;
}
