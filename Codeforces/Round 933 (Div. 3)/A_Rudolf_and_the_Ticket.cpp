#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, m, k;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        sort(a.begin(), a.end(), cmp);
        sort(b.begin(), b.end(), cmp);
        int ans = 0;
        for(int i: a){
            for(int j: b){
                if(i + j <= k){
                    ans += 1;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
