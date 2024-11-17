#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> num(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> num[i][j];
        }
    }
    int ans = 0;
    bool again;
    do{
        again = false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(num[i][j] == -1){
                    continue;
                }
                for(int k = i + 1; k < n; k++){
                    if(num[k][j] == -1){
                        continue;
                    }else if(num[k][j] != num[i][j]){
                        break;
                    }else{
                        ans += num[i][j];
                        num[i][j] = -1;
                        num[k][j] = -1;
                        again = true;
                    }
                }
                for(int k = i - 1; k > 0; k--){
                    if(num[k][j] == -1){
                        continue;
                    }else if(num[k][j] != num[i][j]){
                        break;
                    }else{
                        ans += num[i][j];
                        num[i][j] = -1;
                        num[k][j] = -1;
                        again = true;
                    }
                }
                for(int k = j + 1; k < m; k++){
                    if(num[i][k] == -1){
                        continue;
                    }else if(num[i][k] != num[i][j]){
                        break;
                    }else{
                        ans += num[i][j];
                        num[i][j] = -1;
                        num[i][k] = -1;
                        again = true;
                    }
                }
                for(int k = j - 1; k > 0; k--){
                    if(num[i][k] == -1){
                        continue;
                    }else if(num[i][k] != num[i][j]){
                        break;
                    }else{
                        ans += num[i][j];
                        num[i][j] = -1;
                        num[i][k] = -1;
                        again = true;
                    }
                }
            }
        }
    }while(again);
    cout << ans << '\n';
    return 0;
}