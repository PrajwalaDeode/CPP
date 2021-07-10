#include<iostream>
using namespace std;

class item
{
private:
      float pi;
      int num;
      static int data;

public:
    void argument(float x, int y)
    {
        pi = x;
        num = y;
        data+=1;
    }
    void display()
    {
        cout <<"pi: " <<pi <<endl;
        cout << "num: "<<num << endl;
        cout << "data: "<<data << endl;
    }

    friend void sum(item);

    void mul(int , int) const;
};

//static variable declaration
int item :: data;


//Friend function
void sum(item s)
{
    float k=3.4;
    k = k+s.pi;
    cout << "sum: "<<k << endl;


}


//if function is constant one can not declare variable again
//if it is not constant we can declare the same variable with different value.
void item :: mul(int n, int m) const
{

    cout << "m*num: "<< m*num << endl;
    cout << "n*num:"<< n*num << endl;
}


int main()
{
    item A;
    A.argument(9.3,10);
    A.display();
    sum(A);
    A.mul(2,3);

    return 0;
}
