#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int r, c, x = 0, y = 0, num;
    cin >> r >> c;
    string str;
    cin >> str;
    vector<vector<bool>> room(r, vector<bool>(c, 0));
    room[0][0] = 1; 
    for(int i = 0, len = str.length(); i < len; i++){
        num = str[i] - '0';
        switch(i % 4){
            case 0:
                while(num-- && x < c - 1){
                    x += 1;
                    room[y][x] = 1;
                }
                break;
            case 1:
                while(num-- && y < r - 1){
                    y += 1;
                    room[y][x] = 1;
                }
                break;
            case 2:
                while(num-- && x > 0){
                    x -= 1;
                    room[y][x] = 1;
                }
                break;
            case 3:
                while(num-- && y > 0){
                    y -= 1;
                    room[y][x] = 1;
                }
                break;
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(room[i][j]){
                cout << '*';
            }else{
                cout << '.';
            }
        }
        cout << '\n';
    }
    return 0;
}