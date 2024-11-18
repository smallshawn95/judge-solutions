#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m, l, x, y, z, temp;
        cin >> n >> m >> l;
        vector<vector<int>> num(n + 1, vector<int>());
        vector<bool> down(n, false);
        for(int i = 0; i < m; i++){
            cin >> x >> y;
            num[x].push_back(y);
        }
        int total = 0;
        for(int i = 0; i < l; i++){
            cin >> z;
        }
        cout << total << '\n';
    }
    return 0;
}