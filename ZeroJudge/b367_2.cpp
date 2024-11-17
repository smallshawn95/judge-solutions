#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, m;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        int num[n][m];
        for(int x = 0; x < n; x++){
            for(int y = 0; y < m; y++){
                cin >> num[x][y];
            }
        }
        bool yes = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(num[i][j] != num[n - i - 1][m - j - 1]){
                    yes = 0;
                    break;
                }
            }
            if(!yes){
                cout << "keep defending\n";
                break;
            }else if(yes && i == n - 1){
                cout << "go forward\n";
            }
        }
    }
    return 0;
}
