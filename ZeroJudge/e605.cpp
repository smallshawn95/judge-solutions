#include <iostream>
using namespace std;

int main()
{
    int n, m, times = 1;
    while(cin >> n >> m && n != 0){
        char bomb[103][103] = {'0'};
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> bomb[i][j];
            }
        }
        cout << "Field #" << times++ << ":\n";
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(bomb[i][j] == '*'){
                    cout << '*';
                }else{
                    int num = 0;
                    num += bomb[i - 1][j - 1] == '*';
                    num += bomb[i - 1][j] == '*';
                    num += bomb[i - 1][j + 1] == '*';
                    num += bomb[i][j - 1] == '*';
                    num += bomb[i][j + 1] == '*';
                    num += bomb[i + 1][j - 1] == '*';
                    num += bomb[i + 1][j] == '*';
                    num += bomb[i + 1][j + 1] == '*';
                    cout << num;
                }
            }
            cout << '\n';
        }
    }
    return 0;
}