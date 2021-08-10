#include<iostream>
using namespace std;

template<class T1, class T2>
class vector
{
  T1 a;
public:
   vector(T1 num)
   {
       a=num;
       int j=90;
       cout<<"Addition is: "<<a+j<<endl;
   }
   T2 add(T2 num)
   {
       return(a/num);
   }
};

int main()
{
    vector<int,float> v1(45);
    cout<<"Result is: "<<v1.add(89.78)<<endl;
    return 0;
}