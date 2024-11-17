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
    int a, b;
    vector<vector<int>> graph(n + 1);
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i = 1; i <= n; i++){
        cout << i << ':';
        sort(graph[i].begin(), graph[i].end());
        for(int j: graph[i]){
            cout << ' ' << j;
        }
        cout << '\n';
    }
    return 0;
}