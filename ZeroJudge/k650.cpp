#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

struct point{
    int h, l, w;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l, w, h;
    cin >> l >> w >> h;
    vector<vector<vector<char>>> grid(h + 2, vector<vector<char>>(l + 2, vector<char>(w + 2, '1')));
    vector<vector<vector<bool>>> visited(h + 2, vector<vector<bool>>(l + 2, vector<bool>(w + 2, false)));
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= l; j++){
            for(int k = 1; k <= w; k++){
                cin >> grid[i][j][k];
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= l; j++){
            for(int k = 1; k <= w; k++){
                if(!visited[i][j][k] && grid[i][j][k] == '0'){
                    int total = 0;
                    queue<point> q;
                    q.push({i, j, k});
                    while(!q.empty()){
                        int x = q.front().h;
                        int y = q.front().l;
                        int z = q.front().w;
                        q.pop();
                        if(visited[x][y][z]){
                            continue;
                        }
                        total += 1;
                        visited[x][y][z] = true;
                        if(grid[x - 1][y][z] == '0'){
                            q.push({x - 1, y, z});
                        }
                        if(grid[x + 1][y][z] == '0'){
                            q.push({x + 1, y, z});
                        }
                        if(grid[x][y - 1][z] == '0'){
                            q.push({x, y - 1, z});
                        }
                        if(grid[x][y + 1][z] == '0'){
                            q.push({x, y + 1, z});
                        }
                        if(grid[x][y][z - 1] == '0'){
                            q.push({x, y, z - 1});
                        }
                        if(grid[x][y][z + 1] == '0'){
                            q.push({x, y, z + 1});
                        }
                    }
                    ans = max(total, ans);
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}