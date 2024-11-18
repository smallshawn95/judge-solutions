#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, m;
    cin >> n >> m;
    vector<int> floor(n, 0);
    vector<vector<pair<bool, long long>>> room(n, vector<pair<bool, long long>>(m));
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            cin >> room[i][j].first >> room[i][j].second;
            if(room[i][j].first){
                floor[i] += 1;
            }
        }
    }
    long long num, enter, ans = 0;
    cin >> enter;
    for(long long i = 0; i < n; i++){
        ans = (ans + room[i][enter].second) % 20123;
        num = room[i][enter].second % floor[i];
        if(num == 0){
            num = floor[i];
        }
        while(true){
            if(room[i][enter].first){
                num -= 1;
            }
            if(num == 0){
                break;
            }
            enter = (enter + 1) % m;
        }
    }
    cout << ans << '\n';
    return 0;
}
