#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> num(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> num[i][j];
        }
    }
    for(int i = 1; i < n; i++){
        num[i][0] += num[i - 1][0];
    }
    for(int j = 1; j < m; j++){
        num[0][j] += num[0][j - 1];
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            num[i][j] += max(num[i - 1][j], num[i][j - 1]);
        }
    }
    cout << num[n - 1][m - 1] << '\n';
    return 0;
}
