#include <iostream>
using namespace std;

const int MOD = 1e4 + 7;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;
    while(b){
        if(b & 1){
            ans = (ans * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    cout << ans << '\n';
    return 0;
}
