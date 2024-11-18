#include <iostream>
using namespace std;

int main()
{
    int R, C, N, num[100][100], x = 1;
    cin >> R >> C >> N;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            num[i][j] = x;
            x += 1;
        }
    }
    int temp;
    for(int k = 2; k <= N; k++){
        if(k % 2 == 0){
            for(int i = 0; i < R; i++){
                for(int j = (C - 1); j > 0; j--){
                    temp = num[i][j];
                    num[i][j] = num[i][j - 1];
                    num[i][j - 1] = temp;
                }
            }
        }else if(k % 2 == 1){
            for (int i = 0; i < C; i++){
                for (int j = (R - 1); j > 0; j--){
                    temp = num[j][i];
                    num[j][i] = num[j - 1][i];
                    num[j - 1][i] = temp;
                }
            }
        }
    }
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cout << num[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}