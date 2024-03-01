#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for(int &i: num){
        cin >> i;
    }
    sort(num.begin(), num.end());
    if(num[0] != num[1]){
        cout << "YES\n";
        return;
    }
    for(int i = 1; i < n; i++){
        if(num[i] % num[0]){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
