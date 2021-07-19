#include<iostream>
using namespace std;

class point
{
   int x,y;
public:
   point(int x1, int y1)
   {
      x=x1;
      y=y1;\
      cout<<"x:"<<x<<endl;
      cout<<"y:"<<y<<endl;
   }
   point(point &p1)
   {
      x=p1.x;
      y=p1.y;
      cout<<"x:"<<x<<endl;
      cout<<"y:"<<y<<endl;
   }
   ~point()
   {
       cout<<"deconsturctor"<<endl;
   }
};

int main()
{
  point a(10,15);
  point b=a;
  point c(a);
  return 0;


}
