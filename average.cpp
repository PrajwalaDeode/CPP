#include<iostream>
using namespace std;

int main()
{
    float average;
    int n=9,x;
    float sum=0;
    for(int i=0;i<n;i++)
    {
        x=i+1;
        cout<<x<<endl;
        sum=sum+x;
    }
    average=sum/n;
    cout<<"Average of "<<n<<" number is "<<average;
    return 0;
    


}