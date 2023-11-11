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
    vector<int> history(n + 1);
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
        if(visited[n]){
            break;
        }
        for(int i: grid[x]){
            if(!visited[i]){
                q.push(i);
                history[i] = x;
                visited[i] = true;
            }
        }
    }
    if(!visited[n]){
        cout << "IMPOSSIBLE\n";
    }else{
        vector<int> ans;
        ans.push_back(n);
        while(history[n] != 1){
            ans.push_back(history[n]);
            n = history[n];
        }
        ans.push_back(1);
        cout << ans.size() << '\n';
        for(int i = int(ans.size()) - 1; i >= 0; i--){
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
