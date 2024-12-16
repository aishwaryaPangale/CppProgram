#include<iostream>
using namespace std;
class reverse
{
private:
    int i,a[5],j,temp;
public:
    void setArray(int a[])
    {
        for(i=0;i<5;i++)
        {
            this->a[i]=a[i];
        }
    }
    void performOperation()
    {
        cout<<"Display Array ";
        for(i=0;i<5;i++)
        {
            cout<<"   "<<i<<a[i];
        }
        for(i=0,j=4;i<5/2;i++,j--)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        cout<<"\nReverse Array ";
        for(i=0;i<5;i++)
        {
            cout<<"  "<<a[i];
        }
    }
};
int main()
{
    int i,a[5];
    cout<<"Enter five element ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    reverse r;
    r.setArray(a);
    r.performOperation();
}
