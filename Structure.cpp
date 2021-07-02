#include<iostream>
#include<string>

using namespace std;

struct address
{
    char *society;
    char *state;
    char *city;
    char *country;
};

int main()
{
    struct address one;

    char society[30] = "Vrundavan";
     one.society =  society;

    char city[30] = "Lasalgoan";
    one.city=  city;

    char state[30] = "Maharastra";
    one.state =  state;

    char country[30] = "India";
    one.country =  country;

    cout<< "Society name " << one.society << endl;
    cout<< "City name " << one.city<< endl;
    cout<< "State name " << one.state << endl;
    cout<< "Country name " << one.country << endl;

    return 0;




}

