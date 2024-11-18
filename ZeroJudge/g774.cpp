#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> speed(n + m);
    for(int i = 0; i < n + m; i++){
        cin >> speed[i].first >> speed[i].second;
    }
    sort(speed.begin(), speed.end());
    int ans = 0, man = n;
    for(int i = 0; i < n + m; i++){
        if(speed[i].first < speed[i].second && man > 0){
            ans += speed[i].first;
            man -= 1;
        }else{
            ans += speed[i].second;
        }
    }
    cout << ans << '\n';
    return 0;
}