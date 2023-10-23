#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h1, m1, h2, m2;
    while(cin >> h1 >> m1 >> h2 >> m2){
        if(h1 + m1 + h2 + m2 == 0){
            break;
        }
        int ans = (h2 - h1) * 60 + (m2 - m1);
        if(ans < 0){
            cout << ans + 24 * 60 << '\n';
        }else{
            cout << ans << '\n';
        }
    }
    return 0;
}