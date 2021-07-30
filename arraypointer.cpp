#include<iostream>
using namespace std;

int main()
{
  int val[3]={1,2,3};
  int *ptr;
  ptr=val;
  cout<< ptr[0] << ptr[1] << ptr[2] <<endl;



  for(int i=0;i<3;i++)
  {
      cout<<ptr<<endl;
      cout<<*ptr<<endl;
      ptr++;
  }
  cout<< ptr[0] << ptr[1] << ptr[2] <<endl;
  return 0;

}
