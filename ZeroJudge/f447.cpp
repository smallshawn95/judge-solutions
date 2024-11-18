#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t, n, m;
    cin >> t;
    for(long long i = 0; i < t; i++){
        cin >> n >> m;
        long long ans = 0;
        for(int j = 1; j <= n; j++){
            ans += m - j;
        }
        cout << ans << '\n';
    }
    return 0;
}