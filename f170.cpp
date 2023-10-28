#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, y;
    cin >> n >> x >> y;
    vector<vector<bool>> walk(n + 2, vector<bool>(n + 2, false));
    vector<vector<long long>> city_map(n + 2, vector<long long>(n + 2, -100));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> city_map[i][j];
        }
    }
    int ans = 0;
    long long now;
    queue<pair<int, int>> road;
    road.push({x + 1, y + 1});
    while(!road.empty()){
        x = road.front().first;
        y = road.front().second;
        road.pop();
        if(walk[x][y]){
            continue;
        }
        now = city_map[x][y];
        walk[x][y] = true;
        ans += 1;
        if(abs(city_map[x - 1][y] - now) < 3){
            road.push({x - 1, y});
        }
        if(abs(city_map[x + 1][y] - now) < 3){
            road.push({x + 1, y});
        }
        if(abs(city_map[x][y - 1] - now) < 3){
            road.push({x, y - 1});
        }
        if(abs(city_map[x][y + 1] - now) < 3){
            road.push({x, y + 1});
        }
    }
    cout << ans << '\n';
    return 0;
}
