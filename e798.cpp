#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<vector<int>> num(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> num[i][j];
        }
    }
    for(int i = 0; i < n; i += 2){
        for(int j = 0; j < n; j += 2){
            int max_num = num[i][j];
            if(num[i + 1][j] > max_num){
                max_num = num[i + 1][j];
            }
            if(num[i][j + 1] > max_num){
                max_num = num[i][j + 1];
            }
            if(num[i + 1][j + 1] > max_num){
                max_num = num[i + 1][j + 1];
            }
            cout << max_num << ' ';
        }
        cout << '\n';
    }
    return 0;
}