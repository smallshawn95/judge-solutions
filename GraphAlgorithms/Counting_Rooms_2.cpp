#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n + 2, vector<char>(m + 2, '#'));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    vector<vector<bool>> visited(n + 2, vector<bool>(m + 2, false));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(!visited[i][j] && grid[i][j] == '.'){
                stack<pair<int, int>> s;
                s.push({i, j});
                ans += 1;
                while(!s.empty()){
                    int x = s.top().first;
                    int y = s.top().second;
                    s.pop();
                    if(!visited[x][y]){
                        visited[x][y] = true;
                        if(grid[x - 1][y] == '.'){
                            s.push({x - 1, y});
                        }
                        if(grid[x + 1][y] == '.'){
                            s.push({x + 1, y});
                        }
                        if(grid[x][y - 1] == '.'){
                            s.push({x, y - 1});
                        }
                        if(grid[x][y + 1] == '.'){
                            s.push({x, y + 1});
                        }
                    }
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}