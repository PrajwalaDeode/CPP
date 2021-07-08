#include<iostream>
using namespace std;

int add(int x, int y)
{
    return(x+y);
}

int add(float x, float y)
{
    return(x+y);
}

int add(char x, char y)
{
    return(x+y);
}

int main()
{
    int a=5;
    int b=10;
    add(a,b);

    float c=5.9;
    float d=10.4;
    add(a,b);

    char 3;
    char f=4;
    add(e,f);

    cout<<"Addition of integer: "<<add(a,b)<<endl;
    cout<<"Addition of float numbers: "<<add(c,d)<<endl;
    cout<<"Addition of character: "<<add(e,f)<<endl;

    return 0;
}
