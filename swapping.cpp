#include<iostream>
using namespace std;


int main()
{
   int a =10;
   int b= 40;
   swap(a,b);
   cout << a << endl;
   cout << b << endl;
   return 0;

}

//Call by value
/*int swap(int x, int y)
{
    int temp = x;
    x=y;
    y= temp;
    return 0;
} */

//Call by refrence
int swap(int &x, int &y)
{
    int temp=x;
    x=y;
    y=temp;
    return 0;
}

//Pointer
/*int swap(int *x,int *y)
{
    int temp=*x;
    *x = *y;
    *y=temp;
    return 0;
} */
