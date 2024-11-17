#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int n, m;
    while(t--){
        cin >> n >> m;
        bool can = true;
        for(int x, i = 0; i < m; i++){
            cin >> x;
            if(x < n){
                can = false;
            }
        }
        if(can){
            cout << "YEEES!!! INKER!\n";
        }else{
            cout << "NOOOO!!! JACKY XX!\n";
        }
    }
    return 0;
}
