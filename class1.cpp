#include<iostream>
using namespace std;

class bird
{
    char name;
    int type;
public:
    void argument(char _name, int _type)
    {

        name = _name;
        type = _type;
    }

    void display()
    {

        cout<<"name: "<<name <<endl;
        cout<<"type: "<<type <<endl;

    }
};

int main()
{
    bird robin;
    bird duck;



    robin.argument('R',0);
    duck.argument('D',1);

    robin.display();
    duck.display();

    return 0;


}
