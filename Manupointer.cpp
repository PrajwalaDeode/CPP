
#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr;
    ptr=&a;

    cout<<"Original value of a: "<<*ptr<<endl;

    *ptr = *ptr+a;
    cout<<"Recalculated value of a: "<<*ptr<<endl;
    return 0;
}
