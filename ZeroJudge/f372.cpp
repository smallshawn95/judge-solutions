#include <iostream>
using namespace std;

const int MOD = 1e4 + 7;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x;
    while(cin >> x){
        int y = 3, ans = 1;
        while(x){
            if(x & 1){
                ans = (ans * y) % MOD;
            }
            y = (y * y) % MOD;
            x >>= 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
