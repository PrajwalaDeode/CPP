#include<iostream>
using namespace std;

void geeks()
{
    int var=20;
    int *ptr;
    ptr=&var;

    cout<<"value at ptr: "<<ptr<<endl;
    cout<<"value at var: "<<var<<endl;
    cout<<"value at *ptr: "<<*ptr<<endl;

}

int main()
{
    geeks();
    return 0;
}
