#include<iostream>
using namespace std;

int main()
{
   long int n,sum=0,r;
   cout<<"Enter the number";
   cin>>n;

   //Reverse the number
   while(n>0)
   {
     r=n%10;
     sum=sum*10+r;
     n=n/10;
   }
   n=sum;

   //print number in digit using switch case

   while(n>0)
   {
     r=n%10;
     switch(r)
     {
     case 1:
          cout<<"one ";
          break;
     case 2:
          cout<<"Two ";
          break;
    case 3:
          cout<<"Three ";
          break;
    case 4:
          cout<<"Four ";
          break;
    case 5:
          cout<<"Five ";
          break;
    case 6:
          cout<<"Six ";
          break;
    case 7:
          cout<<"Seven ";
          break;
    case 8:
          cout<<"Eight ";
          break;
    case 9:
          cout<<"Nine ";
          break;
    case 0:
          cout<<"zero ";
          break;
    default:
          cout<<"ttt ";
          break;

   }
   n=n/10;
   cout<<" ";
   }
   return 0;
}
