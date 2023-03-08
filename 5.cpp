#include <iostream>
using namespace std;

int main() {
    int t,a,b,x,c;
    cout<<"enter the size of an array:";
    cin>>t;
    while(t--)
    {
        cout<<"enter the elements of an array:";
        cin>>a>>b>>x;
        c=x+a;
        if(c<=b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
