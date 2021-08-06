#include<iostream>
using namespace std;

int volume(int);
double volume(double,int);

int main()
{
    cout<<volume(10)<<endl;
    cout<<volume(4.5,7)<<endl;
    return 0;

}
int volume(int s)
{
    return(s*s*s);

}
double volume(double r,int h)
{
    return(3.14*r*r*h);
}