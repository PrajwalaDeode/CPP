#include<iostream>
using namespace std;

class prime
{
    int a,i,k;

public:
    prime(int x)
    {
        a=x;
        k=1;
        for(i=2;i<=a/2;i++)
            if(a%i==0)
        {
            k=0;
            break;
        }
        else
        {
            k=1;
        }
    }
    void show()
    {
        if(k==1)
        {
            cout<<a<<" is prime number"<<endl;
        }
        else
        {
            cout<<a<<" is not prime number"<<endl;
        }
    }
};

int main()
{
    int j;
    int x=1;
    for(j=1;j<=3;j++)
    {
        x=(x-1)+7;
        prime a(x);
        a.show();
    }
    return 0;
}
