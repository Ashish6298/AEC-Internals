#include <iostream>
using namespace std;

int main() {
    cout<<"enter the size of an array:";
    int N;
    cin >> N; 
    int arr[N];
        cout<<"enter the elements of an array:";
    for(int i=0;i<N;i++) {
        cin >> arr[i]; 
    }
    
    cout<<"The elements in a reverse order of an array is:";

    for(int i=N-1;i>=0;i--) {
        cout << arr[i] << " "; }
    return 0;
}
