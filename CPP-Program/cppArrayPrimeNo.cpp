#include<iostream>
using namespace std;
class prime
{
private:
    int i,x[5],count=0,j,temp,k=0;
public:
    void setArray(int a[])
    {
        for(i=0;i<5;i++)
        {
            x[i]=a[i];
        }
    }
    void performOperation()
    {
        cout<<"\nDisplay Array ";
        for(i=0;i<5;i++)
        {
            cout<<" "<<x[i];
        }
        cout<<"\nPrime number in array ";
        for(i=0;i<5;i++)
        {
             temp=x[i];
             count=0;
            for(j=1;j<=temp;j++)
            {
                if(x[i]%j==0)
                {
                    count++;
                }
            }
             if(count==2)
            {
                cout<<" "<<x[i];
            }

        }

    }
};
int main()
{
    int i,a[5];
    cout<<"\nEnter five elements ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    prime p;
    p.setArray(a);
    p.performOperation();
}
