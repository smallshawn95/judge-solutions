#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int r, c;
        cin >> r >> c;
        pair<int, int> fire, joe;
        vector<vector<char>> grid(r, vector<char>(c));
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> grid[i][j];
                if(grid[i][j] == 'F'){
                    
                }
            }
        }
        vector<vector<int>> fire_dist(r, vector<int>(c, 0)), joe_dist(r, vector<int>(c, 0));
        vector<vector<bool>> fire_visited(r, vector<bool>(c, false)), joe_visited(r, vector<bool>(c, false));

    }
    return 0;
}