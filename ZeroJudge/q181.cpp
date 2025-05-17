#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int green, red;
    cin >> green >> red;
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        int x;
        cin >> x;
        x %= (green + red);
        if(x >= green){
            ans += red - (x - green);
        }
    }
    cout << ans << '\n';
    return 0;
}

