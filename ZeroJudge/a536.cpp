#include <iostream>
using namespace std;

int main()
{
    int n, e, f, c;
    while(cin >> n){
        for(int i = 1; i <= n; i++){
            int ans = 0;
            cin >> e >> f >> c;
            e += f;
            while(e > 0){
                e = e - c + 1;
                ans += (e > 0 ? 1 : 0);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}