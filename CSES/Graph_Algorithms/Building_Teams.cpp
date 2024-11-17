#include <iostream>
#include <vector>
using namespace std;

bool same = false;
vector<int> ans;
vector<bool> visited;
vector<vector<int>> classmate;

void dfs(int x)
{
    for(int i: classmate[x]){
        if(!visited[i]){
            visited[i] = true;
            if(ans[x] == 1){
                ans[i] = 2;
            }else{
                ans[i] = 1;
            }
            dfs(i);
        }else if(ans[x] == ans[i]){
            same = true;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, n, m;
    cin >> n >> m;
    ans.resize(n + 1, 0);
    visited.resize(n + 1, false);
    classmate.resize(n + 1);
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        classmate[a].push_back(b);
        classmate[b].push_back(a);
    }
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            visited[i] = true;
            ans[i] = 1;
            dfs(i);
        }
    }
    if(same){
        cout << "IMPOSSIBLE\n";
    }else{
        for(int i = 1; i <= n; i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
