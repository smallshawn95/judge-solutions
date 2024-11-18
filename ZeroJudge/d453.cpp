#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, m;
    pair<int, int> start, end;
    cin >> t;
    while(t--){
        cin >> n >> m >> start.first >> start.second >> end.first >> end.second;
        start = {start.first - 1, start.second - 1};
        end = {end.first - 1, end.second - 1};
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
                if(!visited[new_x][new_y] && grid[new_x][new_y] == '0'){
                    q.push({new_x, new_y});
                    dist[new_x][new_y] = dist[x][y] + 1;
                }
            }
        }
        cout << dist[end.first][end.second] << '\n';
    }
    return 0;
}
