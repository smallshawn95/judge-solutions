#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int move_x[4] = {-1, 1, 0, 0};
int move_y[4] = {0, 0, -1, 1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int find_x, find_y;
        cin >> find_x >> find_y >> ws;
        string str;
        vector<string> grid;
        while(getline(cin, str) && str.size() != 0){
            grid.push_back(str);
        }
        int ans = 0, n = grid.size(), m = grid[0].length();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        queue<pair<int, int>> q;
        q.push({find_x - 1, find_y - 1});
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            if(!visited[x][y]){
                ans += 1;
                visited[x][y] = true;
                for(int i = 0; i < 4; i++){
                    int new_x = x + move_x[i];
                    int new_y = y + move_y[i];
                    if(new_x < 0 || new_x >= n || new_y < 0 || new_y >= m){
                        continue;
                    }
                    if(!visited[new_x][new_y] && grid[new_x][new_y] == '0'){
                        q.push({new_x, new_y});
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}