#include<iostream>
using namespace std;

class car
{
    char name;
    int prize;
    int manufacturing_year;
public:
    void argument(char _name,int _prize,int _manufacturing_year)
    {
         name = _name;
         prize= _prize;
         manufacturing_year=_manufacturing_year;
    }

    void display()
    {
        cout<<"Name: "<<name << endl;
        cout<<"Price: "<<prize << endl;
        cout<<"Manufacturing_year: "<<manufacturing_year<< endl;

    }

};

int main()
{
    car honda;
    car maruti;


    honda.argument('H',10000000,2015);
    maruti.argument('M',9000000,2020);

    honda.display();
    maruti.display();

    return 0;
}
