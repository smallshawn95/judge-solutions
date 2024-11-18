#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    pair<int, int> start;
    vector<vector<char>> grid(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            if(grid[i][j] == '.' && (i == 0 || i == n - 1 || j == 0 || j == m - 1)){
                start = {i, j};
            }
        }
    }
    int ans = 0;
    int move_x[4] = {-1, 1, 0, 0};
    int move_y[4] = {0, 0, -1, 1};
    vector<vector<int>> dist(n, vector<int>(m, 0));
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    q.push(start);
    dist[start.first][start.second] = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        visited[x][y] = true;
        for(int i = 0; i < 4; i++){
            int new_x = x + move_x[i];
            int new_y = y + move_y[i];
            if(new_x < 0 || new_y < 0 || new_x >= n || new_y >= m){
                continue;
            }
            if(!visited[new_x][new_y] && grid[new_x][new_y] == '.'){
                dist[new_x][new_y] = dist[x][y] + 1;
                q.push({new_x, new_y});
                ans = max(dist[new_x][new_y], ans);
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(dist[i][j] == ans){
                cout << i + 1 << ' ' << j + 1 << '\n';
                break;
            }
        }
    }
    return 0;
}