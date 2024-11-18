#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int x = t * 3;
    int y = 299 + max(t - 300, 0) * 3;
    int z = 699 + max(t - 750, 0) * 3;
    int ans = min(x, min(y, z));
    cout << ans << '\n';
    return 0;
}
