#include<iostream>
using namespace std;

template<class T>
T mymax(T x, T y)
{
   return(x>y)?x:y;
}

template<class T>
T mymin(T x,T y)
{
    return(x<y)?x:y;
}

template<class T>
T myavg(T x,T y)
{
    double sum;
    sum=x+y;
    return  sum/2;
}

int main()
{
    cout<<"Maximum"<<endl;
    cout<<mymax<int>(4,5)<<endl;
    cout<<mymax<double>(4.67,9.61)<<endl;
    cout<<mymax<char>('g','e')<<endl;

    cout<<"Minimum"<<endl;
    cout<<mymin<int>(4,5)<<endl;
    cout<<mymin<double>(4.67,9.61)<<endl;
    cout<<mymin<char>('g','e')<<endl;

    cout<<"Average"<<endl;
    cout<<myavg<int>(4,5)<<endl;
    cout<<myavg<double>(4.67,9.61)<<endl;
    cout<<myavg<char>('g','e')<<endl;
    return 0;
}
