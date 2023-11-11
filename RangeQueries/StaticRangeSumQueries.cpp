#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q, num;
    cin >> n >> q;
    vector<long long> prefix_sum(n + 1, 0);
    for(int i = 1; i <= n; i++){
        cin >> num;
        prefix_sum[i] = prefix_sum[i - 1] + num;
    }
    int x, y;
    while(q--){
        cin >> x >> y;
        cout << prefix_sum[y] - prefix_sum[x - 1] << '\n';
    }
    return 0;
}