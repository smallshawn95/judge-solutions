#include <iostream>
using namespace std;

int main()
{
    int x, y;
    while(cin >> x >> y){
        int num[x][y];
        for(int i = 0; i < x; i++){
            for(int k = 0; k < y; k++){
                cin >> num[i][k];
            }
        }
        for(int i = 0; i < y; i++){
            for(int k = 0; k < x; k++){
                cout << num[k][i] << ' ';
            }
            cout << '\n';
        }
    }
}
