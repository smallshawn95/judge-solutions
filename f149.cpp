#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int r, c;
    cin >> r >> c;
    vector<vector<char>> grid(r + 2, vector<char>(c + 2, '0'));
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> grid[i][j];
        }
    }
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if(grid[i][j] == '5'){
                if(grid[i - 1][j - 1] != '0' && grid[i - 1][j - 1] != '1'){
                    grid[i][j] = '9';
                }else if(grid[i - 1][j] != '0' && grid[i - 1][j] != '1'){
                    grid[i][j] = '9';
                }else if(grid[i - 1][j + 1] != '0' && grid[i - 1][j + 1] != '1'){
                    grid[i][j] = '9';
                }else if(grid[i][j - 1] != '0' && grid[i][j - 1] != '1'){
                    grid[i][j] = '9';
                }else if(grid[i][j + 1] != '0' && grid[i][j + 1] != '1'){
                    grid[i][j] = '9';
                }else if(grid[i + 1][j - 1] != '0' && grid[i + 1][j - 1] != '1'){
                    grid[i][j] = '9';
                }else if(grid[i + 1][j] != '0' && grid[i + 1][j] != '1'){
                    grid[i][j] = '9';
                }else if(grid[i + 1][j + 1] != '0' && grid[i + 1][j + 1] != '1'){
                    grid[i][j] = '9';
                }
            }
        }
    }
    int a = 0, b = 0;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if(grid[i][j] == '1'){
                if(grid[i - 1][j - 1] == '5'){
                    a += 1;
                }else if(grid[i - 1][j] == '5'){
                    a += 1;
                }else if(grid[i - 1][j + 1] == '5'){
                    a += 1;
                }else if(grid[i][j - 1] == '5'){
                    a += 1;
                }else if(grid[i][j + 1] == '5'){
                    a += 1;
                }else if(grid[i + 1][j - 1] == '5'){
                    a += 1;
                }else if(grid[i + 1][j] == '5'){
                    a += 1;
                }else if(grid[i + 1][j + 1] == '5'){
                    a += 1;
                }else{
                    b += 1;
                }
            }
        }
    }
    cout << a << ' ' << b << '\n';
    return 0;
}
