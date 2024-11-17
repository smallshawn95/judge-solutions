#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> grid(h, vector<int>(w, 0));
    while(n--){
        int r, c, t, x;
        cin >> r >> c >> t >> x;
        for(int i = r - t; i <= r + t; i++){
            for(int j = c - t; j <= c + t; j++){
                if(i < 0 || i >= h || j < 0 || j >= w){
                    continue;
                }
                if(abs(i - r) + abs(j - c) <= t){
                    grid[i][j] += x;
                }
            }
        }
    }
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << grid[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
