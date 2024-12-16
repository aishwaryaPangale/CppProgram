#include<iostream>
using namespace std;
class armstrong
{
    int n,flag;
public:
    void setData(int x)
    {
        n=x;
    }
    void checkArmstrong()
    {
        int i,p,sum,temp,rem,count=0;
        temp=n;
        while(temp>0)
        {
            count++;
            temp=temp/10;
        }
        sum=0;
        temp=n;
        while(temp>0)
        {
            i=1;
            p=1;
            rem=temp/10;
            while(i<=count)
            {
                p=p*rem;
            }
            sum=sum+p;
            temp=temp/10;
        }
        if(sum==n)
            flag=1;
        else
            flag=0;
    }
    void show()
    {
        if(flag==1)
        {
            cout<<"\nArmstrong Number ";
        }
        else
        {
            cout<<"\nNot Armstrong Number ";
        }
    }
};
int main()
{
    int n;
    cout<<"\nEnter the number ";
    cin>>n;
    armstrong a;
    a.setData(n);
    a.checkArmstrong();
    a.show();
}
