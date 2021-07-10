#include<iostream>
using namespace std;

class student
{
private:
    string name;
    static int id;
    int marks;
public:
    void argument(string  n, int x)
    {
        name = n;
        marks = x;
        id+=1;
    }

    void display()
    {
        cout << "Name: "<<name<<endl;
        cout << "Id: "<<id<<endl;
        cout << "Marks: "<<marks<<endl;

    }

    friend void roll_n(student);

    void average(int ) const;
};
//Static variable declaration
int student :: id;

//Friend function
void roll_no(student s)
{
    int k  = 10;
    cout <<"Roll_Number:"<< k<<endl;
}

void student :: average(int x) const
{
    float avg = (marks+x)/2;
    cout << "Average:" << avg <<endl;
}

int main()
{
    student ram;
    ram.argument("R",78);
    ram.display();
    roll_no(ram);
    ram.average(78);
    return 0;

}
