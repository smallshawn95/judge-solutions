#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l, w, h, k;
    cin >> l >> w >> h >> k;
    if(l % k != 0 || w % k != 0 || h % k != 0){
        cout << 0 << '\n';
        return 0;
    }
    cout << (l / k) * (w / k) * (h / k) << '\n';
    return 0;
}
