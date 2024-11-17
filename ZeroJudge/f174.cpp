#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int num, ans = 0, prefix_sum = 0;
    deque<pair<int, int>> dq;
    dq.push_back({0, 0});
    for(int i = 1; i <= n; i++){
        cin >> num;
        prefix_sum += num;
        while(dq.size() && dq.front().second < i - k){
            dq.pop_front();
        }
        ans = max(ans, prefix_sum - dq.front().first);
        while(dq.size() && dq.back().first > prefix_sum){
            dq.pop_back();
        }
        dq.push_back(make_pair(prefix_sum, i));
    }
    cout << ans << '\n';
    return 0;
}