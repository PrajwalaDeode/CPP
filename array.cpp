#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int arr1[5];
    int i;
    cout << "copy elements of array in different array"<< endl;
    for(i=0;i<5;i++)
    {
        arr1[i]=arr[i];

        cout << arr1[i] << endl;
    }
    cout<<"Reverse order Array" << endl;
    for(i=4;i>=0;i--)
    {
        cout << arr1[i] << endl;
    }
    return 0;

}
