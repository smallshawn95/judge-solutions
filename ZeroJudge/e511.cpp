#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> store(n);
        for(int i = 0; i < n; i++){
            cin >> store[i];
        }
        sort(store.begin(), store.end());
        cout << (store[n - 1] - store[0]) * 2 << '\n';
    }
    return 0;
}
