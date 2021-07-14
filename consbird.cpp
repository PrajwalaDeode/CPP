#include<iostream>
using namespace std;

class bird
{
     string name;
     int feather; //0 if featherless, 1 feather
     double egg;  //lay egg 1.0
public:
      bird(string name1)
     {
         name = name1;
         cout<<"Bird name: " <<name<<endl;
     }
      bird(int feather1)
     {
         feather = feather1;
         if(feather == 1)  cout<<"Bird is having feathers "<<endl;
         else  cout<<"Bird is featherless "<<endl;
     }
     bird(double egg1)
     {
         egg = egg1;
         if(egg == 1.0)  cout<<"Bird lay eggs"<<endl;
         else  cout<<"Bird do not lay eggs "<<endl;
     }

};

int main()
{
    bird a("crow");
    bird b(1);
    bird c(0.0);
    return 0;
}
