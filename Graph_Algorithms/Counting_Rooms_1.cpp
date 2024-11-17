#include <iostream>
using namespace std;

int n, m, ans = 0;
char grid[1005][1005];
bool visit[1005][1005];

void DFS(int y, int x)
{
    visit[y][x] = true;
    if(y > 0 && grid[y - 1][x] == '.' && !visit[y - 1][x]){
        DFS(y - 1, x);
    }
    if(y < n - 1 && grid[y + 1][x] == '.' && !visit[y + 1][x]){
        DFS(y + 1, x);
    }
    if(x > 0 && grid[y][x - 1] == '.' && !visit[y][x - 1]){
        DFS(y, x - 1);
    }
    if(x < m - 1 && grid[y][x + 1] == '.' && !visit[y][x + 1]){
        DFS(y, x + 1);
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            visit[i][j] = false;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '.' && !visit[i][j]){
                DFS(i, j);
                ans += 1;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
