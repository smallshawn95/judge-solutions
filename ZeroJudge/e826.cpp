#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> fan(n);
    for(int i = 0; i < n; i++){
        fan[i] = {i, 0};
    }
    int x, y;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        fan[x].second += y;
    }
    sort(fan.begin(), fan.end(), cmp);
    for(pair<int, int> i: fan){
        cout << i.first << ' ' << i.second << '\n';
    }
    return 0;
}