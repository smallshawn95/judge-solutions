#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r, n;
    cin >> r >> n;
    int range = 2 * r - 1;
    vector<vector<char>> grid(range, vector<char>(range, '#'));
    for(int x, y, i = 0; i < n; i++){
        cin >> x >> y;
        grid[x * 2][y * 2] = '&';
    }
    for(int i = 0; i < range; i++){
        for(int j = 0; j < range; j++){
            if(grid[i][j] == '#'){
                if(i - 1 >= 0 && i + 1 < range && grid[i - 1][j] == '&' && grid[i + 1][j] == '&'){
                    grid[i][j] = '|';
                }else if(j - 1 >= 0 && j + 1 < range && grid[i][j - 1] == '&' && grid[i][j + 1] == '&'){
                    grid[i][j] = '-';
                }else if(i - 1 >= 0 && i + 1 < range && j - 1 >= 0 && j + 1 < range){
                    if(grid[i - 1][j - 1] == '&' && grid[i - 1][j + 1] == '&' && grid[i + 1][j - 1] == '&' && grid[i + 1][j + 1] == '&'){
                        grid[i][j] = 'X';
                    }else if(grid[i - 1][j - 1] == '&' && grid[i + 1][j + 1] == '&'){
                        grid[i][j] = '\\';
                    }else if(grid[i - 1][j + 1] == '&' && grid[i + 1][j - 1] == '&'){
                        grid[i][j] = '/';
                    }
                }
            }
        }
    }
    for(vector<char> i: grid){
        for(char j: i){
            cout << j;
        }
        cout << '\n';
    }
    return 0;
}
