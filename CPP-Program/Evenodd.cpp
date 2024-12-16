#include<iostream>
using namespace std;
class occurance{
    int i,even=0,odd=0,vowel=0,console=0,len=0;
public:
    occurance (int a[])
    {
        for(i=0;i<5;i++)
        {
            if(a[i]%2==0)
            {
                even++;
            }
            else{
                odd++;
            }
        }
        cout<<"\nEven Number is :"<<even;
        cout<<"\nOdd Number is :"<<odd;
    }
    occurance (char str[])
    {

        for(i=0;i<str[i]!='\0';i++)
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'|| str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='U'||str[i]=='O')
             {
                 vowel++;
             }
             else{
                console++;
             }
        }
        cout<<"\nVowel in string "<<vowel;
        cout<<"\nConsole in string "<<console;
    }
};
int main()
{
    int i,a[5];
    char str[10];
    cout<<"\nEnter five element in array ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    occurance a1(a);

    cout<<"\nEnter the string ";
    cin>>str;
    occurance a2(str);
}
