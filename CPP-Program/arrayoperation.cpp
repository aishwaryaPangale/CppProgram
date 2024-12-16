#include<iostream>
using namespace std;
class  operationApp
{
    int c[10],k,i,j,temp;
public:
    operationApp(int a[])
    {
          cout<<"\narray in Ascending order ";
          for(i=0;i<5;i++)
          {
              for(j=0;j<5;j++)
              {
                  if(a[i]<a[j])
                  {
                      temp=a[i];
                      a[i]=a[j];
                      a[j]=temp;
                  }
              }
          }
          for(i=0;i<5;i++)
          {
              cout<<"\t"<<a[i];
          }

          cout<<"\nArray in Descending order ";
          for(i=0;i<5;i++)
          {
              for(j=0;j<5;j++)
              {
                  if(a[i]>a[j])
                  {
                      temp=a[i];
                      a[i]=a[j];
                      a[j]=temp;
                  }
              }
          }
          for(i=0;i<5;i++)
          {
              cout<<"\t"<<a[i];
          }
    }
    operationApp(int x[],int y[])
    {
        k=0;
           for(i=0;i<5;i++)
           {
               c[k]=x[i];
               k++;
           }
           for(i=0;i<5;i++)
           {
               c[k]=y[i];
               k++;
           }
           cout<<"\nMerge array is ";
           for(k=0;k<10;k++)
           {
               cout<<"\t"<<c[k];
           }
    }
};
int main()
{
   int i,a[5],x[5],y[5];
   cout<<"\nEnter five element in array ";
   for(i=0;i<5;i++)
   {
       cin>>a[i];
   }
   operationApp a1(a);

   cout<<"\nEnter first array element ";
   for(i=0;i<5;i++)
   {
       cin>>x[i];
   }
   cout<<"\nEnter second array element ";
   for(i=0;i<5;i++)
   {
       cin>>y[i];
   }
   operationApp a2(x,y);
}
