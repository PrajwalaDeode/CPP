#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
}

int main()
{
    int x=500,y=100;
    swap(&x,&y);
    cout<<"value of x is: "<<x<<endl;
    cout<<"Value of Y is: "<<y<<endl;
    return 0;
}
