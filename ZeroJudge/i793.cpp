#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int move_x[4] = {-1, 1, 0, 0};
int move_y[4] = {0, 0, -1, 1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r, c, a, b;
    cin >> r >> c >> a >> b;
    vector<vector<int>> grid(r, vector<int>(c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> grid[i][j];
        }
    }
    if(grid[a][b] == 2){
        cout << 0 << '\n';
        return 0;
    }
    int ans = 10000000;
    vector<vector<int>> dist(r, vector<int>(c, 0));
    vector<vector<bool>> visited(r, vector<bool>(c, false));
    queue<pair<int, int>> q;
    q.push({a, b});
    visited[a][b] = true;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int now_x = x + move_x[i];
            int now_y = y + move_y[i];
            if(now_x < 0 || now_y < 0 || now_x >= r || now_y >= c){
                continue;
            }
            if(!visited[now_x][now_y]){
                visited[now_x][now_y] = true;
                if(grid[now_x][now_y] == 0){
                    dist[now_x][now_y] = dist[x][y] + 1;
                    q.push({now_x, now_y});
                }else if(grid[now_x][now_y] == 2){
                    dist[now_x][now_y] = dist[x][y] + 1;
                    ans = min(ans, dist[now_x][now_y]);
                }
            }
        }
    }
    if(ans == 10000000){
        cout << "WAKUWAKU\n";
    }else{
        cout << ans << '\n';
    }
    return 0;
}
