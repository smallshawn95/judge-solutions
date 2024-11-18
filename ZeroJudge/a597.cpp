#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

char grid[505][505];

int main()
{
    int n, m;
    while(scanf("%d%d", &n, &m)){
        bool visited[505][505] = {0};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf(" %c", &grid[i][j]);
            }
        }
        int ans = 0, max_ans = 0;
        int move_x[4] = {-1, 1, 0, 0}, move_y[4] = {0, 0, -1, 1};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visited[i][j] && grid[i][j] == 'J'){
                    int total = 1;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    visited[i][j] = true;
                    while(!q.empty()){
                        int x = q.front().first, y = q.front().second;
                        q.pop();
                        for(int i = 0; i < 4; i++){
                            int new_x = x + move_x[i], new_y = y + move_y[i];
                            if(new_x < 0 || new_y < 0 || new_x >= n || new_y >= m){
                                continue;
                            }
                            if(!visited[new_x][new_y] && grid[new_x][new_y] == 'J'){
                                total += 1;
                                q.push({new_x, new_y});
                                visited[new_x][new_y] = true;
                            }
                        }
                    }
                    ans += 1;
                    max_ans = max(total, max_ans);
                }
            }
        }
        printf("%d %d\n", ans, max_ans);
    }
    return 0;
}