#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string grid[8][8];
    string a = "87654321", b = "abcdefgh";
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            grid[i][j] += b[j];
            grid[i][j] += a[i];
        }
    }
    string str;
    while(t--){
        cin >> str;
        int x = str[0] - 'a', y = '8' - str[1];
        for(int i = 0; i < 8; i++){
            if(i == x){
                continue;
            }
            cout << grid[y][i] << '\n';
        }
        for(int i = 0; i < 8; i++){
            if(i == y){
                continue;
            }
            cout << grid[i][x] << '\n';
        }
    }
    return 0;
}
