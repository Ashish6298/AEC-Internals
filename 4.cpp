#include <iostream>
#include<string>
using namespace std;

int main() 
{
    int t;
    cout<<"enter the trials:";
    cin>>t;
    while(t--)
    {
       string s;
       cout<<"Enter the string:";
       cin>>s;
       int j,i;
       int l=1;
       for(j=0;j<s.length()-3;j++)
       {
           l=1;
           for(i=j;i<j+3;i++)
           {
               
               if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
                     {
                         l=0;
                     }
           }
           if(l==1)
              {
               cout<<"Agastya is HAPPY"<<endl;break;}
       }
       if(l==0)
     cout<<"Agastya is SAD"<<endl;
    }
    return 0;
}
