#include<iostream>
using namespace std;
class UnionApp
{
private:
    int i,x[5],y[5],flag,j,z[10],k;
public:
    void setArray(int a[],int b[])
    {
        for(i=0;i<5;i++)
        {
            x[i]=a[i];
        }
        for(i=0;i<5;i++)
        {
            y[i]=b[i];
        }

    }
    void performUnionOperation()
    {
        k=0;
         for(i=0;i<5;i++)
         {
             z[k]=x[i];
             k++;
         }
         for(i=0;i<5;i++)
         {
             flag=0;
             for(j=0;j<5;j++)
             {
                 if(z[j]!=y[i])
                 {
                     flag=1;
                 }
             }
         }
             if(flag==1)
             {
                 cout<<"\nArray is union";
             }
             else
             {
                 cout<<"\nArray is not union";
             }

             /*if(flag==0)
             {
                 z[k]=y[i];
                 k++;
             }

         cout<<"\n union Array ";
         for(i=0;i<k;i++)
         {
             cout<<" "<<z[i];
         }*/
    }
    void performIntersectionOperation()
    {
          for(i=0;i<5;i++)
          {
              z[k]=x[i];
              k++;
          }
          flag=0;
          for(i=0;i<5;i++)
          {
              for(j=0;j<5;j++)
              {
                  if(z[j]==y[i])
                  {
                      flag=1;
                  }
              }
          }
          if(flag==1)
          {
              cout<<"\nArray is Intersection ";
          }
          else
          {
              cout<<"\nArray is not Intersection";
          }
    }
};
int main()
{
    int i,a[5],b[5],j;
    cout<<"Enter 1st array element ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter 2nd array element ";
    for(i=0;i<5;i++)
    {
        cin>>b[i];
    }
    UnionApp u;
    u.setArray(a,b);
    u.performUnionOperation();
    u.performIntersectionOperation();
}
