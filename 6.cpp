#include <iostream>
using namespace std;

int main() {
    int T;
    cout<<"enter the trails:";
    cin >> T;
    while(T--) {
        int X, Y, Z;
        cout<<"enter the elements of input X, Y, Z:";
        cin >> X >> Y >> Z; 
        int total_time = X * Y; 
        int breaks = X / 3; 
        int break_time = breaks * Z; 
        int session_time = total_time + break_time; 
        if(X % 3 == 0) {
            session_time -= Z; 
        }
        cout<<"Length of Chetan's gaming session is:";
        cout << session_time << endl;
    }
    return 0;
}
