#include<iostream>
using namespace std;

template<class T>
class calculator
{
    T num1;
    T num2;
public:
    calculator(T n1, T n2)
    {
        num1=n1;
        num2=n2;
    }
    void display()
    {
        cout<<"Given numbers are: "<<num1 <<num2  <<endl;
        cout<<"Addition is: "<<add()<<endl;
        cout<<"Subtraction is: "<<sub()<<endl;
        cout<<"Multiplication is: "<<mul()<<endl;
        cout<<"Division is: "<<div()<<endl;

    }
    T add()
    {
        return(num1 + num2);
    }
    T sub()
    {
        return(num1 - num2);
    }
    T mul()
    {

        return(num1 * num2);
    }
    T div()
    {
        return(num1 / num2);
    }
};

int main()
{
    calculator<int>c1(10,5);
    calculator<float>c2(12.4,6.2);

    cout<<"Int call"<<endl;
    c1.display();
    cout<<endl;

    cout<<"Float call"<<endl;
    c2.display();

    return 0;
}
