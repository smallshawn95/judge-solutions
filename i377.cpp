#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<char>> data(r + 2, vector<char>(c + 2, '.'));
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> data[i][j];
            if(data[i][j] >= 'A' && data[i][j] <= 'Z'){
                data[i][j] += 32;
            }
        }
    }
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i < len; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    pair<int, int> move[8] = {
        {-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}
    };
    if(len == 1){
        for(int i = 1; i <= r; i++){
            for(int j = 1; j <= c; j++){
                if(data[i][j] == str[0]){
                    cout << i << ' ' << j << '\n';
                    cout << i << ' ' << j << '\n';
                    return 0;
                }
            }
        }
    }else{
        for(int i = 1; i <= r; i++){
            for(int j = 1; j <= c; j++){
                if(data[i][j] == str[0]){
                    for(int k = 0; k < 8; k++){
                        int x = i, y = j, l;
                        for(l = 1; l < len; l++){
                            x += move[k].first; 
                            y += move[k].second;
                            if(data[x][y] != str[l]){
                                break;
                            }
                        }
                        if(l == len){
                            cout << i << ' ' << j << '\n';
                            cout << x << ' ' << y << '\n';
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << "NO\n";
    return 0;
}