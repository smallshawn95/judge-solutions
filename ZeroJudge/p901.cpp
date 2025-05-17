#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    int r, c, x;
    cin >> r >> c;
    vector<vector<int>> grid(r, vector<int>(c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> grid[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        bool is_find = false;
        for(int j = 0; j < r; j++){
            for(int k = 0; k < c; k++){
                if(s[i] == grid[j][k]){
                    is_find = true;
                    cout << j + 1 << ' ' << k + 1 << '\n';
                }
            }
        }
        if(!is_find){
            cout << -1 << '\n';
        }
    }
    return 0;
}
