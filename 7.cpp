#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int T;
    cout<<"enter the test cases:";
    cin >> T; 
    while(T--) {
        int N;
        cout<<"enter the total no. of horses:";
        cin >> N;
        int S[N];
        cout<<"enter the skills for each horses:";
        for(int i=0;i<N;i++) {
            cin >> S[i]; 
        }
        sort(S, S+N); 
        int min_diff = INT_MAX; 
        for(int i=1;i<N;i++) {
            int diff = S[i] - S[i-1]; 
            if(diff < min_diff) {
                min_diff = diff; 
            }
        }
        cout<<"Thed most skilled horses is at"<<" "<<min_diff<<" "<<"posistion";
        cout <<  endl; 
    }
    return 0;
}
