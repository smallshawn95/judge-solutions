#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<char>> grid(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    string ans;
    set<char> total;
    int num, x = 0, y = n - 1;
    for(int i = 0; i < k; i++){
        cin >> num;
        switch(num){
            case 0:
                if(y > 0){
                    y -= 1;
                }
                ans += grid[y][x];
                total.insert(grid[y][x]);
                break;
            case 1:
                if(x < m - 1){
                    x += 1;
                }
                ans += grid[y][x];
                total.insert(grid[y][x]);
                break;
            case 2:
                if(x < m - 1 && y < n - 1){
                    x += 1;
                    y += 1;
                }
                ans += grid[y][x];
                total.insert(grid[y][x]);
                break;
            case 3:
                if(y < n - 1){
                    y += 1;
                }
                ans += grid[y][x];
                total.insert(grid[y][x]);
                break;
            case 4:
                if(x > 0){
                    x -= 1;
                }
                ans += grid[y][x];
                total.insert(grid[y][x]);
                break;
            case 5:
                if(x > 0 && y > 0){
                    x -= 1;
                    y -= 1;
                }
                ans += grid[y][x];
                total.insert(grid[y][x]);
                break;
        }
    }
    cout << ans << '\n' << total.size() << '\n';
    return 0;
}
