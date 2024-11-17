#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string grid[11];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int min_i = n + 1, max_i = -1;
        int min_j = n + 1, max_j = -1;
        for(int i = 0; i < n; i++){
            cin >> grid[i];
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '1'){
                    min_i = min(min_i, i);
                    min_j = min(min_j, j);
                    max_i = max(max_i, i);
                    max_j = max(max_j, j);
                }
            }
        }
        if(max_i - min_i == max_j - min_j){
            cout << "SQUARE\n";
        }else{
            cout << "TRIANGLE\n";
        }
    }
    return 0;
}
