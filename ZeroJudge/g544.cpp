#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> hamburger(n);
    for(int i = 0; i < n; i++){
        cin >> hamburger[i].first;
    }
    for(int i = 0; i < n; i++){
        cin >> hamburger[i].second;
    }
    int ans = 0, x = hamburger[0].first;
    for(int i = 1; i < n; i++){
        if(i == n - 1 || hamburger[i].second != hamburger[i - 1].second){
            ans += x;
            x = hamburger[i].first;
        }else{
            x = max(hamburger[i].first, x);
        }
    }
    cout << ans << '\n';
    return 0;
}