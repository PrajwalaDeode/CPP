#include<iostream>
using namespace std;

template<typename T>
T add(T n1, T n2)
{
    return(n1+n2);
}

int main()
{
    int a=5,b=10;
    cout<<"add: "<<add(a,b)<<endl;

    float i=90.2,j=82.3;
    cout<<"add: "<<add(i,j)<<endl;


    return 0;
}
