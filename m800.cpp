#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h, w, k;
    cin >> h >> w >> k;
    vector<vector<int>> room(h, vector<int>(w));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> room[i][j];
        }
    }
    int ans = 0;
    while(k--){
        vector<vector<int>> temp = room;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                int x = 4, small = 0, big = 0;
                vector<pair<int, int>> num = {
                    {-1, 0}, {1, 0}, {0, -1}, {0, 1}
                };
                for(int k = 0; k < 4; k++){
                    if(i + num[k].first < 0 || i + num[k].first >= h){
                        x -= 1;
                        continue;
                    }
                    if(j + num[k].second < 0 || j + num[k].second >= w){
                        x -= 1;
                        continue;
                    }
                    if(room[i + num[k].first][j + num[k].second] < room[i][j]){
                        small += 1;
                    }else if(room[i + num[k].first][j + num[k].second] > room[i][j]){
                        big += 1;
                    }
                }
                x = x / 2;
                if(small > x){
                    ans -= 1;
                    temp[i][j] -= 1;
                }else if(big > x){
                    ans += 1;
                    temp[i][j] += 1;
                }
            }
            room = temp;
        }
    }
    cout << ans << '\n';
    return 0;
}
