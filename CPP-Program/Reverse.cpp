#include<iostream>
#include<string.h>
using namespace std;
class ReverseApp
{

    int i,temp,len=0,j;
   public:
       ReverseApp(int a[])
       {
          for(i=0,j=4;i<5/2;i++,j--)
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }

          cout<<"\nReverse array is : ";
          for(i=0;i<5;i++)
          {
              cout<<"\t"<<a[i];
          }
       }
       ReverseApp(char str[])
       {
           len=strlen(str);
           cout<<"\nLength of string is : "<<len;
        cout<<"\nReverse string is : "<<strrev(str);
          /* while(str[i]!='\0')
           {
               len++;
           }
           cout<<"\nLength of string is : "<<len;
           for(i=0,j=len;i<len/2;i++,j--)
           {
               temp=str[i];
               str[i]=str[j];
               str[j]=temp;
           }
           cout<<"\nReverse string is :";
           for(i=0;i<len;i++)
           {
               cout<<str[i];
           }*/
       }
};
int main()
{
    int a[5],i;
    char str[10];

    cout<<"\nEnter the five element in array ";
    for(i=0;i<5;i++)
    {
       cin>>a[i];
    }
    ReverseApp r1(a);

    cout<<"\nEnter string ";
    cin>>str;
    ReverseApp r2(str);
}
