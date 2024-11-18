#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    pair<int, int> start, end;
    vector<vector<char>> grid(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'A'){
                start = {i, j};
            }else if(grid[i][j] == 'B'){
                end = {i, j};
            }
        }
    }
    vector<vector<int>> time(n, vector<int>(m, 0));
    vector<vector<char>> side(n, vector<char>(m, ' '));
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    q.push(start);
    while(!q.empty()){
        int x = q.front().first, y = q.front().second;
        q.pop();
        if(visited[x][y]){
            continue;
        }
        visited[x][y] = true;
        if(x > 0 && !visited[x - 1][y] && grid[x - 1][y] != '#'){
            side[x - 1][y] = 'U';
            time[x - 1][y] = time[x][y] + 1;
            q.push({x - 1, y});
        }
        if(x < n - 1 && !visited[x + 1][y] && grid[x + 1][y] != '#'){
            side[x + 1][y] = 'D';
            time[x + 1][y] = time[x][y] + 1;
            q.push({x + 1, y});
        }
        if(y > 0 && !visited[x][y - 1] && grid[x][y - 1] != '#'){
            side[x][y - 1] = 'L';
            time[x][y - 1] = time[x][y] + 1;
            q.push({x, y - 1});
        }
        if(y < m - 1 && !visited[x][y + 1] && grid[x][y + 1] != '#'){
            side[x][y + 1] = 'R';
            time[x][y + 1] = time[x][y] + 1;
            q.push({x, y + 1});
        }
        if(time[end.first][end.second] != 0){
            break;
        }
    }
    if(time[end.first][end.second] == 0){
        cout << "NO\n";
    }else{
        cout << "YES\n" << time[end.first][end.second] << '\n';
        vector<char> ans;
        while(start != end){
            char c = side[end.first][end.second];
            ans.push_back(c);
            switch(c){
                case 'U':
                    end = {end.first + 1, end.second};
                    break;
                case 'D':
                    end = {end.first - 1, end.second};
                    break;
                case 'L':
                    end = {end.first, end.second + 1};
                    break;
                case 'R':
                    end = {end.first, end.second - 1};
                    break;
            }
        }
        for(int i = int(ans.size() - 1); i >= 0; i--){
            cout << ans[i];
        }
        cout << '\n';
    }
    return 0;
}
