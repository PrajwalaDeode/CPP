
#include<iostream>
using namespace std;

template<class T>
class addition
{
     T a;
public:
    addition(T num)
    {
        a=num;
        cout<<"Value of a "<<a<<endl;
    }
    add(T num)
    {
        return a+num;
    }
};
int main()
{
    addition<int> a1(90);
    cout<<"Addition is: "<<a1.add(78)<<endl;
    return 0;
}
