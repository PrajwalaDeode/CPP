#include<iostream>
using namespace std;
class animal
{
public:
     void info()
     {
         cout<<"I am animal"<<endl;
     }
};
class dog:public animal
{
public:
     void bark()
     {
         cout<<"I am dog"<<endl;
     }
};
class cat:public animal
{
public:
    void meow()
    {
        cout<<"I am cat"<<endl;
    }
};

int main()
{
    dog d1;
    d1.info();
    d1.bark();
    

    cat c1;
    c1.info();
    c1.meow();

    return 0;
}