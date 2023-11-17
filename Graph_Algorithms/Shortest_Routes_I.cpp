#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<long long> dist;
vector<vector<pair<long long, long long>>> graph;

void dijkstra()
{
    dist[1] = 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, m;
    cin >> n >> m;
    dist.resize(n + 1, 1e18);
    graph.resize(n + 1);
    long long a, b, c;
    for(int i = 0; i < m; i++){
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }
    dijkstra();
    for(int i = 1; i <= n; i++){
        cout << dist[i] << " \n"[i == n];
    }
    return 0;
}