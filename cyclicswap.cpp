//Cyclic swap
#include<iostream>
using namespace std;

void cyclicswap(int *a,int *b,int *c);

int main()
{
    int a,b,c;
    cout<<"Enter three numbers a,b,c";
    cin>>a>>b>>c;

    cout<<"Print number as it is"<<endl;
    cout << a<< b<< c <<endl;

    cyclicswap(&a,&b,&c);

    cout<<"Print number after swapping"<<endl;
    cout << a<< b<< c <<endl;

    return 0;

}


void cyclicswap(int *a,int *b,int *c)
{
    int temp;
    temp = *b;
    *b=*a;
    *a=*c;
    *c=temp;
}



