#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool succeed = true;
        for(int i = 0; i < n - 2; i++){
            a[i + 2] -= a[i];
            a[i + 1] -= a[i] * 2;
            a[i] = 0;
            if(a[i + 1] < 0 || a[i + 2] < 0){
                succeed = false;
                break;
            }
        }
        if(a[n - 2] > 0 || a[n - 1] > 0){
            succeed = false;
        }
        cout << (succeed ? "YES\n" : "NO\n");
    }
    return 0;
}
