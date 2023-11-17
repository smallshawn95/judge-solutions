#include <iostream>
#include <vector>
using namespace std;

int idx;
vector<int> ans, status;
vector<vector<int>> graph;

bool dfs(int x)
{
    status[x] = 1;
    for(int i: graph[x]){
        if(status[i] == 1 || (status[i] == 0 && !dfs(i))){
            return false;
        }
    }
    ans[idx--] = x;
    status[x] = 2;
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    graph.resize(n + 1);
    for(int i = 0, a, b; i < m; i++){
        cin >> a >> b;
        graph[a].push_back(b);
    }
    idx = n;
    ans.resize(n + 1, 0);
    status.resize(n + 1, 0);
    for(int i = 1; i <= n; i++){
        if(status[i] == 0){
            if(!dfs(i)){
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    for(int i = 1; i <= n; i++){
        cout << ans[i] << '\n';
    }
    return 0;
}
