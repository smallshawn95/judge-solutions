#include <iostream>
#include <cstring>
using namespace std;

int n, m, idx[101][101];
char oil[101][101];

void dfs(int r, int c, int id)
{
    if(r < 0 || r >= m || c < 0 || c >= n){
        return;
    }
    if(idx[r][c] > 0 || oil[r][c] != '@'){
        return;
    }
    idx[r][c] = id;
    for(int dr = -1; dr <= 1; dr++){
        for(int dc = -1; dc <= 1; dc++){
            if(dr != 0 || dc != 0){
                dfs(r + dr, c + dc, id);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> m >> n){
        if(m == 0 && n == 0){
            break;
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> oil[i][j];
            }
        }
        memset(idx, 0, sizeof(idx));
        int ans = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(idx[i][j] == 0 && oil[i][j] == '@'){
                    dfs(i, j, ++ans);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}