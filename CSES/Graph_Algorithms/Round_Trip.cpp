#include <iostream>
#include <vector>
using namespace std;

vector<bool> visited;
vector<vector<int>> graph;

void dfs(int x)
{
    visited[x] = true;
    for(int i: graph[x]){
        
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    visited.resize(n + 1, false);
    graph.resize(n + 1);
    for(int i = 0, a, b; i < m; i++){
        cin >> a >> b;
        graph[a].push_back(b);
    }
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            dfs(i);
        }
    }
    return 0;
}