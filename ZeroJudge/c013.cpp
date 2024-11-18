#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int x, y;
        for(int i = 1; i <= n; i++){
            cin >> x >> y;
            for(int j = 1; j <= y; j++){
                for(int k = 1; k <= x; k++){
                    for(int l = 1; l <= k; l++){
                        cout << k;
                    }
                    cout << '\n';
                }
                for(int k = (x - 1); k > 0; k--){
                    for(int l = 1; l <= k; l++){
                        cout << k;
                    }
                    cout << '\n';
                }
                cout << '\n';
            }
        }
    }
    return 0;
}