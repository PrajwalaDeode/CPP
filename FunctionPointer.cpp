#include<iostream>
using namespace std;

//Pass by value

void square1(int n)
{
   cout<<"Address of n in 1: "<<&n<<endl;
   n=n*n;
   cout<<"Square in n1: "<<n<<endl;
}

//Pass by refrence with pointer
void square2(int* n)
{
   cout<<"Address of n in 2: "<<&n<<endl;
   *n= *n * *n;
   cout<<"Square in n2: "<<*n<<endl;
}

//pass by address
void square3(int &n)
{
   cout<<"Address of n in 3: "<<&n<<endl;
   n=n*n;
   cout<<"Square in n3: "<<n<<endl;

}

int main()
{
   int n1=8;
   cout<<"address of n1 in main: "<<&n1<<endl;
   square1(n1);

   int n2=8;
    cout<<"address of n2 in main: "<<&n2<<endl;
   square2(&n2);

   int n3=8;
   cout<<"address of n3 in main: "<<&n3<<endl;
   square3(n3);

   return 0;





}
