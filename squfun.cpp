#include<iostream>
using namespace std;

int calc(int ,int*, int*);

int main()
{
    int n=10;
    int sq,cube,result;
    result =  calc(n, &sq,&cube);
    cout << sq << endl;
    cout << cube << endl;
    return 0;
}

int calc(int x ,int* psq, int* pcu)
{
    *psq =x * x;
    *pcu = x *x *x;
    return( x, *psq, *pcu);
}
