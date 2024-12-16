#include<iostream>
using namespace std;
class unionApp
{
    int i,count,j,temp,c[10],k,flag;
   public:
     unionApp(int a[])
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
        cout<<"\nArray in ascending order ";
        for(i=0;i<5;i++)
        {
            cout<<"\t"<<a[i];
        }
        //Majority logic
        count=1;
        int flag=0;
        for(i=0;i<5;i++)
        {
            if(a[i]==a[i+1])
            {
                count++;
            }
            else
            {
                cout<<"\n"<<a[i]<<"  "<<count;
                   if(count>2)
                     {
                          flag=1;
                           break;
                      }

                count=1;
            }

        }
         if(flag==1)
         {
             cout<<" array is majority";
         }
        else
         {
            cout<<"\nArray is not Majority";
         }
     }
     unionApp(int a[],int b[])
     {
         k=0;
         flag=0;
         for(i=0;i<5;i++)
         {
             c[k]=a[i];
             k++;
         }
         for(i=0;i<5;i++)
         {
             for(j=0;j<5;j++)
             {
                 if(c[i]==b[j])
                 {
                     flag=1;
                 }
             }
         }
         if(flag==0)
         {
             cout<<"\nArray is Union ";
         }
         else{
            cout<<"\nArray is not union ";
         }
     }
};
int main()
{
    int i,a[5],b[5];
    cout<<"\nEnter five element ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    unionApp a1(a);


    cout<<"\nEnter first array ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter second array ";
    for(i=0;i<5;i++)
    {
        cin>>b[i];
    }
    unionApp a2(a,b);
}
