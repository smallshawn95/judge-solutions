#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int num[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> num[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        int place;
        bool black = 0;
        for(int j = 0; j < n; j++){
            if(num[i][j] == 1){
                if(black == 0){
                    black = 1;
                    place = j;
                }else if(black == 1){
                    for(int k = place; k < j; k++){
                        num[i][k] = 1;
                    }
                    black = 0;
                }
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << num[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}