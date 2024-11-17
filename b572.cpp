#include <iostream>
using namespace std;

int main() {
    int n, time[5], ans;
    while(cin >> n){
        for(int i = 0; i < n; i++){
            for(int k = 0; k < 5; k++){
                cin >> time[k];
            ans = (time[2] * 60 + time[3]) - (time[0] * 60 + time[1]);
            }
            cout << (ans >= time[4] ? "Yes" : "No") << '\n';
        }
    }
    return 0;
}
