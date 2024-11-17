#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    while(cin >> n){
        long long line = (n + 1) / 2;
        long long ans = 3 * (2 * (line + 1) * (line - 1) - 1);
        cout << ans << '\n';
    }
    return 0;
}