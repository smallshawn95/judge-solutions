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
    int old_total = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> room[i][j];
            old_total += room[i][j];
        }
    }
    while(k--){
        vector<vector<int>> tomorrow(h, vector<int>(w, 0));
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                int num = room[i][j], x = 0, y = 0, z = 0;
                if(i - 1 >= 0){
                    x += 1;
                    if(num < room[i - 1][j]){
                        y += 1;
                    }else if(num > room[i - 1][j]){
                        z += 1;
                    }
                }
                if(i + 1 < h){
                    x += 1;
                    if(num < room[i + 1][j]){
                        y += 1;
                    }else if(num > room[i + 1][j]){
                        z += 1;
                    }
                }
                if(j - 1 >= 0){
                    x += 1;
                    if(num < room[i][j - 1]){
                        y += 1;
                    }else if(num > room[i][j - 1]){
                        z += 1;
                    }
                }
                if(j + 1 < w){
                    x += 1;
                    if(num < room[i][j + 1]){
                        y += 1;
                    }else if(num > room[i][j + 1]){
                        z += 1;
                    }
                }
                if(x / 2 < y){
                    tomorrow[i][j] = 1;
                }else if(x / 2 < z){
                    tomorrow[i][j] = -1;
                }
            }
        }
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                room[i][j] += tomorrow[i][j];
            }
        }
    }
    int new_total = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            new_total += room[i][j];
        }
    }
    cout << new_total - old_total << '\n';
    return 0;
}
