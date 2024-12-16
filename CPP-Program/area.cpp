#include<iostream>
using namespace std;
class Area{
   public:
       Area(int r)
       {
           cout<<"\nArea of Circle is : "<<3.14*r*r;
       }
       Area(int l,int b1)
       {
           cout<<"\nArea of Rectangle is : "<<l*b1;
       }

      Area(float b2,float h)
       {
          cout<<"\nArea of Triangle is : "<<0.5*b2*h;
       }
};
int main()
{
    int r,l,b;
    float h,base;
    cout<<"\nEnter Radius ";
    cin>>r;
    Area a1(r);

    cout<<"\nEnter length and height ";
    cin>>l>>b;
    Area a2(l,b);

    cout<<"\nEnter breadth and height ";
    cin>>base>>h;
    Area a3(base,h);

}
