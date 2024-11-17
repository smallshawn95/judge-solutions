#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> city;
vector<bool> visited;

void dfs(int x)
{
    visited[x] = true;
    for(int i: city[x]){
        if(!visited[i]){
            dfs(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, n, m;
    cin >> n >> m;
    city.resize(n + 1);
    visited.resize(n + 1, false);
    while(m--){
        cin >> a >> b;
        city[a].push_back(b);
        city[b].push_back(a);
    }
    vector<int> ans;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            dfs(i);
            ans.push_back(i);
        }
    }
    cout << int(ans.size()) - 1 << '\n';
    for(int i = 0; i < int(ans.size()) - 1; i++){
        cout << ans[i] << ' ' << ans[i + 1] << '\n';
    }
    return 0;
}
