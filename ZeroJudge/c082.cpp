#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char side[4] = {'N', 'E', 'S', 'W'};
    int a, b;
    cin >> a >> b;
    bool ground[a + 1][b + 1];
    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= b; j++){
            ground[i][j] = 0;
        }
    }
    int x, y, z;
    char c;
    while(cin >> x >> y >> c){
        for(int i = 0; i < 4; i++){
            if(c == side[i]){
                z = i;
                break;
            }
        }
        string str;
        cin >> str;
        bool lost = false;
        for(int i = 0, len = str.length(); i < len; i++){
            if(str[i] == 'R'){
                z = (z + 1) % 4;
            }else if(str[i] == 'L'){
                z = (z + 3) % 4;
            }else if(str[i] == 'F'){
                if(z == 0){
                    y += 1;
                    if(y > b){
                        y -= 1;
                        if(ground[x][y]){
                            continue;
                        }
                        lost = true;
                        ground[x][y] = 1;
                        break;
                    }
                }else if(z == 1){
                    x += 1;
                    if(x > a){
                        x -= 1;
                        if(ground[x][y]){
                            continue;
                        }
                        lost = true;
                        ground[x][y] = 1;
                        break;
                    }
                }else if(z == 2){
                    y -= 1;
                    if(y < 0){
                        y += 1;
                        if(ground[x][y]){
                            continue;
                        }
                        lost = true;
                        ground[x][y] = 1;
                        break;
                    }
                }else if(z == 3){
                    x -= 1;
                    if(x < 0){
                        x += 1;
                        if(ground[x][y]){
                            continue;
                        }
                        lost = true;
                        ground[x][y] = 1;
                        break;
                    }
                }
            }
        }
        cout << x << ' ' << y << ' ' << side[z];
        cout << (lost ? " LOST\n" : "\n");
    }
    return 0;
}