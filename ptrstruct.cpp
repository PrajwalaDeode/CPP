#include<iostream>
#include<string>

using namespace std;

struct book
{
    char* name;
    char* author;
    float price;
};

int main()
{
    book one;
    book* ptr;

    char name[20]="Iamge_Processing";
    one.name = name;
    char author[50]="Dhananjay_Theckedath";
    one.author = author;
    one.price = 400.50;

    ptr = &one;

    cout << "BOOK NAME = "<< ptr->name << endl;
    cout << "BOOK AUTHOR = "<< ptr->author << endl;
    cout << "BOOK PRICE = "<< ptr->price << endl;

    return 0;


}
