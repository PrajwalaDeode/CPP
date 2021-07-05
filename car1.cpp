#include<iostream>
using namespace std;

class car
{
    string name;
    int prize;
    int manufacturing_year;
public:
    void argument(string _name,int _prize,int _manufacturing_year)
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


    honda.argument("honda",1000000,2016);
    maruti.argument("Maruti",900000,2020);

    honda.display();
    maruti.display();

    return 0;
}
