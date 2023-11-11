#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, n, m;
    cin >> n >> m;
    vector<int> dist(n + 1, 0), history(n + 1);
    vector<bool> visited(n + 1, false);
    vector<vector<int>> grid(n + 1);
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        grid[a].push_back(b);
        grid[b].push_back(a);
    }
    int x;
    queue<int> q;
    q.push(1);
    visited[1] = true;
    while(!q.empty()){
        x = q.front();
        q.pop();
        for(int i: grid[x]){
            if(!visited[i]){
                dist[i] = dist[x] + 1;
                q.push(i);
                history[i] = x;
                visited[i] = true;
            }
        }
    }
    if(!visited[m]){
        cout << "IMPOSSIBLE\n";
    }else{
        x = n;        
        int k = dist[m];
        vector<int> ans(k + 1);
        for(int i = k; i >= 0; i--){
            ans[i] = x;
            x = history[x];
        }
        cout << k + 1 << '\n';
        for(int i = 0; i <= k; i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}