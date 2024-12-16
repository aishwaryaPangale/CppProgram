#include<iostream>
#include<string.h>
using namespace std;
class Book
{
private:
    int id,price;
    char name[10],author[10];
public:
    void setData(int i,char n[],char a[],int p)
    {
       id=i;
       strcpy(name,n);
       strcpy(author,a);
       price=p;

    }
    void show()
    {
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<author<<"\t"<<price;
    }
};
int main()
{
    int i,choice,;
    char ch;
    book b[5];
    do{
        cout<<"\n1.Add Book\n2.Display Record\n3.Search Book by id\n4.Search Bookmby Author\n5.Display Book information Who is Maximum\n6.Sorted Array By Book Name\n7.Exits";
        cout<<"\nEnter your choice";
         cin>>choice;
         switch(choice)
         {
             case 1:cout<<"\nEnter Book id,name,author and price";


         }
         cout<<"\nDo You Want to Continue y/n";
         cin>>ch;
    }while(ch==y&&ch==Y);
}
