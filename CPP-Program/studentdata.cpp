#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    int rno;
    char name[10];
    float per;

    void setData(int r,char n[],float p)
    {
        rno=r;
        strcpy(name,n);
        per=p;
    }
    void Show()
    {
       cout<<"\n"<<rno<<"\t"<<name<<"\t"<<per;
    }

};
int main()
{

    int rno,i;
    char name[10];
    float per;
    student s[3],temp;
    for(i=0;i<3;i++)
    {
        cout<<"\nEnter the Roll number ,name and percentage of student";
        cin>>rno>>name>>per;
        s[i].setData(rno,name,per);
    }
    for(i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(s[i].per>s[j].per)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    cout<<"\nSorted data is ";
    for(i=0;i<3;i++)
    {
        s[i].Show();
    }

}
