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
    int x, y, ans = 0;
    string road;
    vector<vector<int>> time(n, vector<int>(m, 0));
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<pair<int, int>, string>> q;
    q.push({start, ""});
    while(!q.empty()){
        x = q.front().first.first;
        y = q.front().first.second;
        road = q.front().second;
        q.pop();
        if(!visited[x][y]){
            visited[x][y] = true;
            if(x > 0 && !visited[x - 1][y]){
                if(grid[x - 1][y] == '.'){
                    time[x - 1][y] = time[x][y] + 1;
                    q.push({{x - 1, y}, road + 'U'});
                }else if(grid[x - 1][y] == 'B'){
                    ans = time[x][y] + 1;
                    road += 'U';
                    break;
                }
            }
            if(x < n - 1 && !visited[x + 1][y]){
                if(grid[x + 1][y] == '.'){
                    time[x + 1][y] = time[x][y] + 1;
                    q.push({{x + 1, y}, road + 'D'});
                }else if(grid[x + 1][y] == 'B'){
                    ans = time[x][y] + 1;
                    road += 'D';
                    break;
                }
            }
            if(y > 0 && !visited[x][y - 1]){
                if(grid[x][y - 1] == '.'){
                    time[x][y - 1] = time[x][y] + 1;
                    q.push({{x, y - 1}, road + 'L'});
                }else if(grid[x][y - 1] == 'B'){
                    ans = time[x][y] + 1;
                    road += 'L';
                    break;
                }
            }
            if(y < m - 1 && !visited[x][y + 1]){
                if(grid[x][y + 1] == '.'){
                    time[x][y + 1] = time[x][y] + 1;
                    q.push({{x, y + 1}, road + 'R'});
                }else if(grid[x][y + 1] == 'B'){
                    ans = time[x][y] + 1;
                    road += 'R';
                    break;
                }
            }
        }
    }
    if(ans == 0){
        cout << "NO\n";
    }else{
        cout << "YES\n" << ans << '\n' << road << '\n'; 
    }
    return 0;
}