#include<iostream>
#include<string.h>
using namespace std;
class employee
{
private:
    int id,sal,i;
    char name[20],email[20],address[20];

public:

     void setEmployee(int i,char n[],char e[],int s,char a[])
    {
          id=i;
          sal=s;
          strcpy(name,n);
          strcpy(email,e);
          strcpy(address,a);

    }
    void DisplayRecord()
    {
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<email<<"\t"<<sal<<"\t"<<address;
    }

    int getid()
    {
        return id;
    }
    char* getname()
    {
        return name;
    }
    char* getemail()
    {
        return email;
    }
    int getsal()
    {
        return sal;
    }
    char* getaddress()
    {
        return address;
    }
};
int main()
{
    int choice,i,id,sal,count=0,schoice,sid,ssal,j,uid,usal,max,index=0;
    char name[10],email[20],address[10],ch,sname[10],semail[20],sadderss[20],uname[10],uemail[20],uaddress[20];
    employee e[3],temp;
    do
    {
        cout<<"\n1.Add Employee\n2.Display Record\n3.Search Record\n4.Delete Record\n5.Update Record\n6.Display count of Employee\n7.Ascending order of employee salary\n8.Highest Salary\n9.Minimum and Maximum salary between 10000 to 60000\n10.Exits";
        cout<<"\nEnter your choice ";
        cin>>choice;
        switch(choice)
        {
            case 1:for(i=0;i<3;i++)
                       {
                           cout<<"\nEnter employee id,name,email,salary and address ";
                           cin>>id>>name>>email>>sal>>address;
                           e[i].setEmployee(id,name,email,sal,address);
                       }

                   break;
            case 2:cout<<"\nDisplay Record ";
                    for(i=0;i<3;i++)
                    {
                        e[i].DisplayRecord();
                    }
                    break;
            case 3:cout<<"\nSearch Employee by \n 1.id\n2.name\n3.email\n4.salary\n5.Address";
                   cout<<"\nEnter your choice ";
                   cin>>schoice;
                   switch(schoice)
                   {
                       case 1:cout<<"\nEnter id by you searched ";
                              cin>>sid;
                              for(i=0;i<3;i++)
                              {
                                  if(sid==e[i].getid())
                                  {
                                      e[i].DisplayRecord();
                                  }
                            }
                            break;
                        case 2:cout<<"\nEnter name by you searched ";
                               cin>>sname;
                               for(i=0;i<3;i++)
                               {
                                   if(strcmp(sname,e[i].getname())==0)
                                   {
                                       e[i].DisplayRecord();
                                   }
                               }
                                break;
                        case 3:cout<<"\nEnter the email by you searched ";
                               cin>>semail;
                               for(i=0;i<3;i++)
                               {
                                   if(strcmp(semail,e[i].getemail())==0)
                                   {
                                       e[i].DisplayRecord();
                                   }
                               }break;
                        case 4:cout<<"\nEnter Salary by you searched ";
                                cin>>ssal;
                                for(i=0;i<3;i++)
                                {
                                    if(ssal==e[i].getsal())
                                    {
                                        e[i].DisplayRecord();
                                    }
                                }break;
                        case 5:cout<<"\nEnter Address by you searched ";
                               cin>>sadderss;
                               for(i=0;i<3;i++)
                               {
                                   if(strcmp(e[i].getaddress(),sadderss)==0)
                                   {
                                       e[i].DisplayRecord();
                                   }
                               }break;
                        default:cout<<"\nInvalid Choice ";
                 }
            case 4:cout<<"\nDelete Employee by \n 1.id\n2.name\n3.email\n4.salary\n5.Address";
                   cout<<"\nEnter your choice ";
                   cin>>schoice;
                   switch(schoice)
                   {
                       case 1:cout<<"\nEnter id by you delete ";
                            cin>>sid;
                            count=0;
                            for(i=0;i<3-count;i++)
                            {

                                if(sid==e[i].getid())
                                {
                                    count++;
                                    for(j=i;j<3-count;j++)
                                    {
                                        e[j]=e[j+1];
                                    }
                                    i--;
                                }
                            }
                            for(i=0;i<3-count;i++)
                            {
                                e[i].DisplayRecord();
                            }break;
                       case 2:cout<<"\nEnter name by you delete ";
                            cin>>sname;
                            count=0;
                            for(i=0;i<3-count;i++)
                            {
                                if(strcmp(sname,e[i].getname())==0)
                                {
                                    count++;
                                    for(j=i;j<3-count;j++)
                                    {
                                        e[j]=e[j+1];
                                    }
                                 i--;
                                }
                            }
                            for(i=0;i<3-count;i++)
                            {
                                e[i].DisplayRecord();
                            }break;
                     case 3:cout<<"\nEnter email by you delete ";
                            cin>>semail;
                            count=0;
                            for(i=0;i<3-count;i++)
                            {
                                if(strcmp(semail,e[i].getemail())==0)
                                {
                                    count++;
                                    for(j=i;j<3-count;j++)
                                    {
                                        e[j]=e[j+1];
                                    }
                                    i--;
                                }
                            }
                            for(i=0;i<3-count;i++)
                            {
                                e[i].DisplayRecord();
                            }break;
                        case 4:cout<<"\nEnter the salary by you deleted ";
                               cin>>ssal;
                               count=0;
                               for(i=0;i<3-count;i++)
                               {
                                   if(ssal==e[i].getsal())
                                   {
                                       count++;
                                       for(j=i;j<3-count;j++)
                                       {
                                           e[j]=e[j+1];
                                       }
                                       i--;
                                   }
                               }
                               for(i=0;i<3-count;i++)
                               {
                                   e[i].DisplayRecord();
                               }break;
                        case 5:cout<<"\nEnter Address by you deleted ";
                               cin>>sadderss;
                               count=0;
                               for(i=0;i<3-count;i++)
                               {
                                   if(strcmp(sadderss,e[i].getaddress())==0)
                                   {
                                       count++;
                                       for(j=i;j<3-count;j++)
                                       {
                                           e[j]=e[j+1];
                                       }
                                       i--;
                                   }
                               }
                               for(i=0;i<3-count;i++)
                               {
                                   e[i].DisplayRecord();
                               }break;
                        default:cout<<"\nInvalid Choice ";
                   }
            case 5:cout<<"\nUpdate Employee by \n 1.id\n2.name\n3.email\n4.salary\n5.Address";
                   cout<<"\nEnter your choice ";
                   cin>>schoice;
                   switch(schoice)
                   {
                       case 1:cout<<"\nEnter id by you Update data";
                              cin>>sid;
                              cout<<"\nEnter id , name,email,salary,Address by update ";
                              cin>>uid>>uname>>uemail>>usal>>uaddress;
                              for(i=0;i<3;i++)
                              {
                                  if(sid==e[i].getid())
                                  {
                                     e[i].setEmployee(uid,uname,uemail,usal,uaddress);
                                  }
                              }
                              for(i=0;i<3;i++)
                              {
                                  e[i].DisplayRecord();
                              }break;
                        case 2:cout<<"\nEnter name by you update ";
                               cin>>sname;
                               for(i=0;i<3;i++)
                               {
                                   if(strcmp(sname,e[i].getname())==0)
                                   {
                                       cout<<"\nEnter id,name,email,salary,address";
                                       cin>>uid>>uname>>uemail>>usal>>uaddress;
                                       e[i].setEmployee(uid,uname,uemail,usal,uaddress);
                                   }
                               }
                               for(i=0;i<3;i++)
                               {
                                   e[i].DisplayRecord();
                               }break;
                        case 3:cout<<"\nEnter email by you update ";
                               cin>>semail;
                               for(i=0;i<3;i++)
                               {
                                   if(strcmp(semail,e[i].getemail())==0)
                                   {
                                       cout<<"\nEnter id,name,email,salary,address ";
                                       cin>>uid>>uname>>uemail>>usal>>uaddress;
                                       e[i].setEmployee(uid,uname,uemail,usal,uaddress);
                                   }
                               }
                               for(i=0;i<3;i++)
                               {
                                   e[i].DisplayRecord();
                               }break;
                        case 4:cout<<"\nEnter the salary by you update ";
                               cin>>ssal;
                               for(i=0;i<3;i++)
                               {
                                   if(ssal==e[i].getsal())
                                   {
                                       cout<<"\nEnter the id ,name,email,salary,address ";
                                       cin>>uid>>uname>>uemail>>usal>>uaddress;
                                       e[i].setEmployee(uid,uname,uemail,usal,uaddress);
                                   }
                               }
                               for(i=0;i<3;i++)
                               {
                                   e[i].DisplayRecord();
                               }break;
                        case 5:cout<<"\nEnter the address by you update ";
                               cin>>sadderss;
                               for(i=0;i<3;i++)
                               {
                                   if(strcmp(sadderss,e[i].getaddress())==0)
                                   {
                                       cout<<"\nEnter the id,name,email,salary,address";
                                       cin>>uid>>uname>>uemail>>usal>>uaddress;
                                       e[i].setEmployee(uid,uname,uemail,usal,uaddress);
                                   }
                               }
                               for(i=0;i<3;i++)
                               {
                                   e[i].DisplayRecord();
                               }break;
                   }
            case 6:cout<<"\nTotal Employee is "<<3;
                   break;
            case 7:for(i=0;i<3;i++)
                    {
                       for(j=i+1;j<3;j++)
                       {
                           if(e[i].getsal()>e[j].getsal())
                           {
                               temp=e[i];
                               e[i]=e[j];
                               e[j]=temp;
                           }
                       }
                    }
                    for(i=0;i<3;i++)
                    {
                        e[i].DisplayRecord();
                    }
                    break;
            case 8:max=e[0].getsal();
                   for(i=0;i<3;i++)
                   {
                       if(max<e[i].getsal())
                       {
                           max=e[i].getsal();
                           index=i;
                       }
                   }
                    e[index].DisplayRecord();

                   break;
            case 9:for(i=0;i<3;i++)
                   {
                       if(e[i].getsal()>10000 && e[i].getsal()<60000)
                       {
                           e[i].DisplayRecord();
                       }
                   }
                   break;
            default:cout<<"\nInvalid Choice ";

        }
        cout<<"\nDo You Want to Continue y/n ";
        _flushall();
        cin>>ch;

    }while(ch=='y'||ch=='Y');

}
