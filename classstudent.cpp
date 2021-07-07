#include<iostream>
using namespace std;

class student
{
       string name;
       int roll_no;
       float marks;
public:

       int argument(string _name, int _roll_no , float _marks)
       {
           name = _name;
           roll_no = _roll_no;
           marks = _marks;
       }

       void display()
       {
            cout<<"name of student: "<<name <<endl;
            cout<<"name of roll_no: "<<roll_no <<endl;
            cout<<"name of marks: "<< marks <<endl;
       }

};

int main()
{
    student mayuri;
    student om;

    mayuri.argument("mayuri",1,89.6);
    om.argument("om",2,80.6);

    mayuri.display();
    om.display();

    return 0;

}
