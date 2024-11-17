#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<vector<char>> image(n + 2, vector<char>(n + 2));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> image[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    vector<vector<bool>> visited(n + 2, vector<bool>(n + 2, false));
    queue<pair<int, int>> q;
    q.push({x + 1, y + 1});
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        if(!visited[x][y]){
            image[x][y] = '+';
            visited[x][y] = true;
            if(image[x - 1][y] == '-'){
                q.push({x - 1, y});
            }
            if(image[x + 1][y] == '-'){
                q.push({x + 1, y});
            }
            if(image[x][y - 1] == '-'){
                q.push({x, y - 1});
            }
            if(image[x][y + 1] == '-'){
                q.push({x, y + 1});
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << image[i][j];
        }
        cout << '\n';
    }
    return 0;
}