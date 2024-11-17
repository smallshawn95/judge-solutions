#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int move_x[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int move_y[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int time;
    cin >> time >> ws;
    while(time--){
        string str;
        vector<string> grid;
        while(isalpha(cin.peek())){
            getline(cin, str);
            grid.push_back(str);
        }
        int n = grid.size();
        int m = grid[0].length();
        while(isdigit(cin.peek())){
            pair<int, int> start;
            cin >> start.first >> start.second >> ws;
            start.first -= 1;
            start.second -= 1;
            int total = 0;
            vector<vector<bool>> visited(n, vector<bool>(m, false));
            queue<pair<int, int>> q;
            q.push(start);
            while(!q.empty()){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if(!visited[x][y]){
                    total += 1;
                    visited[x][y] = true;
                    for(int i = 0; i < 8; i++){
                        int new_x = x + move_x[i];
                        int new_y = y + move_y[i];
                        if(new_x < 0 || new_x >= n || new_y < 0 || new_y >= m){
                            continue;
                        }
                        if(!visited[new_x][new_y] && grid[new_x][new_y] == 'W'){
                            q.push({new_x, new_y});
                        }
                    }
                }
            }
            cout << total << '\n';
        }
        if(time){
            cout << '\n';
        }
    }
    return 0;
}