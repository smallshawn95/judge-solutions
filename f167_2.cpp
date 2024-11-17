#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> indegree(n + 1, 0);
    vector<vector<int>> graph(n + 1);
    for(int i = 0, a, b; i < m; i++){
        cin >> a >> b;
        graph[a].push_back(b);
        indegree[b] += 1;
    }
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i = 1; i <= n; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    vector<int> ans;
    while(!q.empty()){
        int x = q.top();
        q.pop();
        ans.push_back(x);
        for(int i: graph[x]){
            indegree[i] -= 1;
            if(indegree[i] == 0){
                q.push(i);
            }
        }
    }
    if(int(ans.size()) != n){
        cout << "NO\n";
    }else{
        cout << "YES\n";
        for(int i: ans){
            cout << i << '\n';
        }
    }
    return 0;
}
