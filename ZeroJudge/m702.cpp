#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    string name;
    map<string, int> school;
    for(int i = 0; i < n; i++){
        cin >> name;
        school[name] += 1;
    }
    vector<pair<string, int>> ans;
    for(auto i: school){
        ans.push_back({i.first, i.second});
    }
    sort(ans.begin(), ans.end(), cmp);
    for(int i = 0; i < m; i++){
        cout << ans[i].first << ' ';
    }
    return 0;
}
