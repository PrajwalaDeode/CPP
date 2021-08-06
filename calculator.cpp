#include<iostream>
using namespace std;

float add(int x, int y)
{
   float t;
   t=x+y;
   return(t);
}
float sub(int p, int q)
{
    float s;
    s=p-q;
    return(s);
}
float mul(int a, int b)
{   
    float p;
    p=a*b;
    return(p);
}

int main()
{
   int a=90;
   int b=78;
   float result,res;
   result=add(a,b);
   cout<<"Addition is "<<result<<endl;
   res=sub(a,b);
   cout<<"Subtraction is "<<res<<endl;
   float res1=mul(a,b);
   cout<<"Multiplication is "<<res1<<endl;
  
   return 0;

}