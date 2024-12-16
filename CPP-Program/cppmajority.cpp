
#include<iostream>
using namespace std;
class majority
{
private:
    int i,count,a[5] ,j,temp;
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
        for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        count=0;
        for(i=0;i<5;i++)
        {
            if(a[i]==a[i+1])
            {
                count++;
            }

        }
        if(count>5/2)
        {
            cout<<"\nArray is Majority";
        }
        else{
            cout<<"\nArray is not Majority";
        }
    }
};
int main()
{
    int i,a[5];
    cout<<"\nEnter five element in array ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    majority m;
    m.setArray(a);
    m.performOperation();
}
