#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int s, time = 1;
    while(cin >> s){
        cout << "Case " << time++ << ":\n";
        int n, m;
        cin >> n >> m;
        pair<int, int> start;
        vector<vector<int>> data(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> data[i][j];
                if(i == 0 && data[i][j]){
                    start = {i, j};
                }
            }
        }
        vector<vector<int>> ans(n, vector<int>(m, 0));
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        ans[start.first][start.second] = 1;
        queue<pair<int, int>> q;
        q.push(start);
        while(!q.empty()){
            int x = q.front().first, y = q.front().second;
            q.pop();
            visited[x][y] = true;
            if(s == 1){
                if(x > 0 && !visited[x - 1][y] && data[x - 1][y]){
                    q.push({x - 1, y});
                    ans[x - 1][y] = ans[x][y] + 1;
                }
            }
            if(x < n - 1 && !visited[x + 1][y] && data[x + 1][y]){
                q.push({x + 1, y});
                ans[x + 1][y] = ans[x][y] + 1;
            }
            if(y > 0 && !visited[x][y - 1] && data[x][y - 1]){
                q.push({x, y - 1});
                ans[x][y - 1] = ans[x][y] + 1;
            }
            if(y < m - 1 && !visited[x][y + 1] && data[x][y + 1]){
                q.push({x, y + 1});
                ans[x][y + 1] = ans[x][y] + 1;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << ans[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}