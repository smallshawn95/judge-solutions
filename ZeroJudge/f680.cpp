#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int move_x[4] = {-1, 1, 0, 0};
int move_y[4] = {0, 0, -1, 1};

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> image(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> image[i][j];
        }
    }
    int ans = 0;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j] && image[i][j] != 0){
                int color = image[i][j];
                queue<pair<int, int>> q;
                q.push({i, j});
                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    visited[x][y] = true;
                    for(int i = 0; i < 4; i++){
                        int new_x = x + move_x[i];
                        int new_y = y + move_y[i];
                        if(new_x < 0 || new_y < 0 || new_x >= n || new_y >= n){
                            continue;
                        }
                        if(!visited[new_x][new_y] && image[new_x][new_y] == color){
                            q.push({new_x, new_y});
                        }
                    }
                }
                ans += 1;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
