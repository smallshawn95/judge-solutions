#include <iostream>
#include <set>
#include <queue>
#include <vector>
using namespace std;

int move_x[4] = {-1, 1, 0, 0};
int move_y[4] = {0, 0, -1, 1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n){
        vector<vector<char>> park(n, vector<char>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> park[i][j];
            }
        }
        vector<vector<int>> dist(n, vector<int>(n, 0));
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        set<char> s;
        queue<pair<int, int>> q;
        q.push({0, 0});
        dist[0][0] = 1;
        dist[n - 1][n - 1] = -1;
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            if(!visited[x][y]){
                visited[x][y] = true;
                if(park[x][y] >= 'A' && park[x][y] <= 'J'){
                    s.insert(park[x][y] + 32);
                }else if(park[x][y] >= 'a' && park[x][y] <= 'j'){
                    s.insert(park[x][y] - 32);
                }
                for(int i = 0; i < 4; i++){
                    int new_x = x + move_x[i];
                    int new_y = y + move_y[i];
                    if(new_x < 0 || new_x >= n || new_y < 0 || new_y >= n){
                        continue;
                    }
                    if(!visited[new_x][new_y] && !s.count(park[new_x][new_y])){
                        q.push({new_x, new_y});
                        dist[new_x][new_y] = dist[x][y] + 1;
                    }
                }
            }
        }
        cout << dist[n - 1][n - 1] << '\n';
    }
    return 0;
}