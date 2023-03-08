
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cout<<"Enter the trials: ";
    cin>>t;
    while(t--){
        int n,current=0;
cout<<"Enter the total students scores: ";
        cin>>n;
        int a[n];
        cout<<"Enter the scores: ";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=n/2;i>=0;i--){
            if(a[i] != a[n/2]){
                current=i+1;
                break;
            }
        }
        cout<<n-current<<" "<<"Students has highest scored"<<endl;
    }
    return 0;
}
