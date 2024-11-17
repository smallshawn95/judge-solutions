#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    vector<vector<char>> grid(9, vector<char>(9));
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> grid[i][j];
        }
    }
    vector<vector<bool>> visited(9, vector<bool>(9, false));
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(!visited[i][j] && grid[i][j] == '.'){
                char c = '0';
                queue<pair<int, int>> q;
                vector<pair<int, int>> ground;
                q.push({i, j});
                while(!q.empty()){
                    int x = q.front().first, y = q.front().second;
                    q.pop();
                    visited[x][y] = true;
                    ground.push_back({x, y});
                    if(x > 0 && !visited[x - 1][y] && grid[x - 1][y] == '.'){
                        q.push({x - 1, y});
                    }
                    if(x < 8 && !visited[x + 1][y] && grid[x + 1][y] == '.'){
                        q.push({x + 1, y});
                    }
                    if(y > 0 && !visited[x][y - 1] && grid[x][y - 1] == '.'){
                        q.push({x, y - 1});
                    }
                    if(y < 8 && !visited[x][y + 1] && grid[x][y + 1] == '.'){
                        q.push({x, y + 1});
                    }
                    if(x > 0 && (grid[x - 1][y] == 'W' || grid[x - 1][y] == 'B')){
                        if(c == '0'){
                            c = grid[x - 1][y];
                        }else if(c != grid[x - 1][y]){
                            cout << "Wrong\n";
                            return 0;
                        }
                    }
                    if(x < 8 && (grid[x + 1][y] == 'W' || grid[x + 1][y] == 'B')){
                        if(c == '0'){
                            c = grid[x + 1][y];
                        }else if(c != grid[x + 1][y]){
                            cout << "Wrong\n";
                            return 0;
                        }
                    }
                    if(y > 0 && (grid[x][y - 1] == 'W' || grid[x][y - 1] == 'B')){
                        if(c == '0'){
                            c = grid[x][y - 1];
                        }else if(c != grid[x][y - 1]){
                            cout << "Wrong\n";
                            return 0;
                        }
                    }
                    if(y < 8 && (grid[x][y + 1] == 'W' || grid[x][y + 1] == 'B')){
                        if(c == '0'){
                            c = grid[x][y + 1];
                        }else if(c != grid[x][y + 1]){
                            cout << "Wrong\n";
                            return 0;
                        }
                    }
                }
                for(pair<int, int> i: ground){
                    grid[i.first][i.second] = c;
                }
            }
        }
    }
    int black = 0, white = 0;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(grid[i][j] == 'B'){
                black += 1;
            }else if(grid[i][j] == 'W'){
                white += 1;
            }
        }
    }
    if(black > white){
        cout << "Black wins!!\n";
    }else{
        cout << "White wins!!\n";
    }
    cout << black << ':' << white << '\n';
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cout << grid[i][j];
        }
        cout << '\n';
    }
    return 0;
}
