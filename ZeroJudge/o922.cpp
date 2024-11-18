#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> shop(n);
    for(int &i: shop){
        cin >> i;
    }
    int x, y, ans = 0;
    while(cin >> x >> y && x && y){
        ans += shop[x - 1] * y;
    }
    cout << ans << '\n';
    return 0;
}
