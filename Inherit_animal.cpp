#include<iostream>
using namespace std;

class animal
{
public:
    void eat()
    {
        cout<<"I can eat"<<endl;
    }
    void sleep()
    {
        cout<<"I can sleep"<<endl;
    }

};
class Dog: public animal
{
public:
    void bark()
    {
        cout<<"I can bark"<<endl;
    }
};

class cat: public animal
{
public:

    void bark()
    {
        cout<<"I am unable to bark"<<endl;
    }
};

int main()
{
    Dog dog1;
    dog1.sleep();
    dog1.eat();
    dog1.bark();

    cat cat1;
    cat1.sleep();
    cat1.eat();
    cat1.bark();
    return 0;
}
