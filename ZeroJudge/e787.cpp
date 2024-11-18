#include <iostream>
using namespace std;

bool num[101][101], box[101][101];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> num[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> box[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int sum = 0;
            for(int k = 0; k < n; k++){
                sum += box[k][j];
            }
            for(int k = 0; k < m; k++){
                sum += box[i][k];
            }
            sum -= box[i][j];
            if(sum % 2){
                num[i][j] = !num[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << num[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}