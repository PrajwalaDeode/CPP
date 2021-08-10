#include<iostream>
using namespace std;

template<class T>
class vector
{
  T a;
public:
   vector(T num)
   {
       a=num;
   }
   T add(T num)
   {
       return a+num;
   }
};

int main()
{
    vector<float> v1(45.67);
    cout<<"Result is: "<<v1.add(89.78)<<endl;
    return 0;
}