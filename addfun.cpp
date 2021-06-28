#include<iostream>
using namespace std;

//Call by value
/*int add(int x,int y)
{
    int sum;
    sum = x+y;
    return(sum);
} */

//Call by refrence
/*int add(int &x,int &y)
{
    int sum;
    sum = x+y;
    return(sum);
}*/

//Pointer
int add(int *x, int*y)
{
    int sum;
    sum = *x + *y;
    return(sum);
}

int main()
{
    int a=200;
    int b=900;
    int total;
    total=add(&a,&b);
    cout << "Addition is " << total<<endl;
    return 0;
}

