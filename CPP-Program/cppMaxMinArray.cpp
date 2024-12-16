#include<iostream>
using namespace std;
class MaxApp
{
private:
    int a[5],i,max,min;
public:
    void setArray(int x[])
    {
        for(i=0;i<5;i++)
        {
            a[i]=x[i];
        }
    }
    void performOperation()
    {
        cout<<"\nDisplay Array";
        for(i=0;i<5;i++)
        {
            cout<<"  "<<a[i];
        }
        max=a[0];
        for(i=1;i<5;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        cout<<"\nMaximum Value is "<<max;
        min=a[0];
        for(i=1;i<5;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        cout<<"\nMinimum Value is "<<min;
    }
};
int main()
{
    int a[5],i;
    cout<<"Enter the Five element ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    MaxApp m;
    m.setArray(a);
    m.performOperation();
}
