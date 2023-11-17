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
    vector<vector<char>> grid(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    int move_x[4] = {-1, 1, 0, 0};
    int move_y[4] = {0, 0, -1, 1};
    vector<vector<int>> dist(n, vector<int>(m, 0));
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    q.push({0, 0});
    dist[n - 1][m - 1] = -1;
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
                q.push({new_x, new_y});
                dist[new_x][new_y] = dist[x][y] + 1;
            }
        }
    }
    cout << dist[n - 1][m - 1] << '\n';
    return 0;
}
