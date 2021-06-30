#include<iostream>
using namespace std;

void bin( int );

int main()
{
    int n=10;
    bin(n);
    return 0;
}

void bin( int num)
{
    if(num>1)
         bin(num/2);
    int res = num%2;
    cout << res ;


}
