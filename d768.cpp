#include <iostream>
#include <vector>
using namespace std;

bool same_color = false;
vector<int> ans;
vector<bool> visited;
vector<vector<int>> grid;

void dfs(int x)
{
    for(int i: grid[x]){
        if(visited[i]){
            if(ans[x] == ans[i]){
                same_color = true;
            }
        }else{
            visited[i] = true;
            if(ans[x] == 1){
                ans[i] = 2;
            }else{
                ans[i] = 1;
            }
            dfs(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    while(cin >> n && n != 0){
        cin >> m;
        int a, b;
        ans.resize(n, 0);
        grid.resize(n);
        visited.resize(n, false);
        for(int i = 0; i < m; i++){
            cin >> a >> b;
            grid[a].push_back(b);
            grid[b].push_back(a);
        }
        ans[0] = 1;
        visited[0] = true;
        dfs(0);
        if(same_color){
            cout << "NOT BICOLORABLE.\n";
        }else{
            cout << "BICOLORABLE.\n";
        }
        ans.clear();
        grid.clear();
        visited.clear();
        same_color = false;
    }
    return 0;
}
