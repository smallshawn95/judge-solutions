#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n;
    while(n--){
        cin >> m;
        vector<vector<int>> grid(m, vector<int>(m));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
                cin >> grid[i][j];
            }
        }
    }
    return 0;
}